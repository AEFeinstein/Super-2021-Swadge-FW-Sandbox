# If you are using swadge emu in another makefile, in another folder, update this to point here.
SWADGEMU?=.

# Directories to find headers in
INCDIRS  := $(shell find $(SWADGEMU)/../user/ -type d) \
			$(SWADGEMU)/sysincstubs \
			$(SWADGEMU)/rawdraw \
			$(SWADGEMU)/.

# Create a variable with the git hash and branch name
GIT_HASH  = $(shell git rev-parse --short HEAD)
GIT_HASH := $(GIT_HASH)-
GIT_HASH := $(GIT_HASH)$(shell git rev-parse --abbrev-ref HEAD)
GIT_HASH := \"$(GIT_HASH)\"

# See these values in user_config.h
# #define SWADGE_DEV_KIT  0
# #define SWADGE_BBKIWI   1
# #define SWADGE_BARREL   2
# #define SWADGE_2019     3
# #define BARREL_1_0_0    4
# #define SWADGE_CHAINSAW 5
ifeq ($(SET_SWADGE_VERSION),0)
  swadgeversion = 0
else ifeq ($(SET_SWADGE_VERSION),1)
  swadgeversion = 1
else ifeq ($(SET_SWADGE_VERSION),2)
  swadgeversion = 2
else ifeq ($(SET_SWADGE_VERSION),3)
  swadgeversion = 3
else ifeq ($(SET_SWADGE_VERSION),4)
  swadgeversion = 4
else ifeq ($(SET_SWADGE_VERSION),5)
  swadgeversion = 5
else
  swadgeversion = 5 # default to SWADGE_CHAINSAW
endif

# Preprocessor defines
DEFINES  := USER_SETTINGS_ADDR=0x6C000 \
			USER_SETTINGS_SIZE=0x3000 \
			ASSETS_ADDR=0x6F000 \
			ASSETS_SIZE=0x51000 \
			SWADGE_VERSION=$(swadgeversion) \
			EMU \
			NO_SOUND_PARAMETERS \
			DFREQ=16000 \
			GIT_HASH=$(GIT_HASH)

ifeq ($(OS),Windows_NT)	 # is Windows_NT on XP, 2000, 7, Vista, 10...
	DEFINES	+= WINDOWS
endif

# All the compiler flags
CFLAGS   := -g $(patsubst %, -I%, $(INCDIRS)) $(patsubst %, -D%, $(DEFINES))

# if you want to make a smaller executable
#CFLAGS += -Os -s -flto -ffunction-sections -fdata-sections -Wl,--gc-sections

# All the linker flags
ifeq ($(OS),Windows_NT)	 # is Windows_NT on XP, 2000, 7, Vista, 10...
	LDFLAGS  := -lGDI32 -lUser32 -lwinmm
else
	LDFLAGS  := -lX11 -lm -lpthread -lasound -lpulse -lrt
endif

# A list of files to exclude from compilation
EXCLUDEC := oled.c \
			adc.c \
			cnlohr_i2c.c \
			gpio_user.c \
			hpatimer.c \
			QMA6981.c \
			ws2812_i2s.c \
			maxtime.c \
			PartitionMap.c \
			espNowUtils.c

# All the source files to compile
SWADGEC  := $(shell find $(SWADGEMU)/../user/ -iname "*.c" $(patsubst %, -not -iname %, $(EXCLUDEC)))
RAWDRAWC := $(SWADGEMU)/rawdraw/CNFG.c
ifeq ($(OS),Windows_NT)	 # is Windows_NT on XP, 2000, 7, Vista, 10...
	SOUNDDRIVER?= $(SWADGEMU)/sound/sound_win.c
else
	SOUNDDRIVER?= $(SWADGEMU)/sound/sound_pulse.c
endif
EMUC     := $(SWADGEMU)/swadgemu.c $(SWADGEMU)/oled.c $(SWADGEMU)/sound/sound.c $(SOUNDDRIVER)

# Makefile targets that don't make what they're called
.PHONY: all clean

# Build everything
all : swadgemu assets.bin

# Build swadgemu
swadgemu : $(RAWDRAWC) $(SWADGEC) $(EMUC)
	gcc $(CFLAGS) -o $@ $^ $(LDFLAGS)

assets.bin : ../assets.bin
	cp ../assets.bin .

../assets.bin :
	make -C .. assets.bin

# Clean everything
clean :
	rm -rf *.o *~ swadgemu ../assets.bin assets.bin
