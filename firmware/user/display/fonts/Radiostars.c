#include "font.h"

#if defined(FEATURE_OLED)

const sprite_t font_Radiostars[] RODATA_ATTR =
{
    {
        .width = 8,
        .height = FONT_HEIGHT_RADIOSTARS,
        .data = {
            0b0000000000000000,
            0b0000000000000000,
            0b0000000000000000,
            0b0000000000000000,
            0b0000000000000000,
            0b0000000000000000,
            0b0000000000000000,
            0b0000000000000000,
            0b0000000000000000,
            0b0000000000000000,
            0b0000000000000000,
            0b0000000000000000,
        },
    },
    {
        .width = 3,
        .height = FONT_HEIGHT_RADIOSTARS,
        .data = {
            0b0000000000000111,
            0b0000000000000111,
            0b0000000000000111,
            0b0000000000000111,
            0b0000000000000111,
            0b0000000000000111,
            0b0000000000000111,
            0b0000000000000111,
            0b0000000000000000,
            0b0000000000000111,
            0b0000000000000111,
            0b0000000000000111,
        },
    },
    {
        .width = 7,
        .height = FONT_HEIGHT_RADIOSTARS,
        .data = {
            0b0000000001110111,
            0b0000000001110111,
            0b0000000001110111,
            0b0000000001110111,
            0b0000000001110111,
            0b0000000000000000,
            0b0000000000000000,
            0b0000000000000000,
            0b0000000000000000,
            0b0000000000000000,
            0b0000000000000000,
            0b0000000000000000,
        },
    },
    {
        .width = 11,
        .height = FONT_HEIGHT_RADIOSTARS,
        .data = {
            0b0000000000000000,
            0b0000000000110011,
            0b0000000001100110,
            0b0000001111111111,
            0b0000001111111111,
            0b0000000011001100,
            0b0000000110011000,
            0b0000011111111110,
            0b0000011111111110,
            0b0000001100110000,
            0b0000011001100000,
            0b0000000000000000,
        },
    },
    {
        .width = 11,
        .height = FONT_HEIGHT_RADIOSTARS,
        .data = {
            0b0000000011011000,
            0b0000000011011000,
            0b0000001111111110,
            0b0000011111111111,
            0b0000011100000000,
            0b0000011111111110,
            0b0000001111111111,
            0b0000000000000111,
            0b0000011111111111,
            0b0000001111111110,
            0b0000000011011000,
            0b0000000011011000,
        },
    },
    {
        .width = 10,
        .height = FONT_HEIGHT_RADIOSTARS,
        .data = {
            0b0000001110110000,
            0b0000001010110000,
            0b0000001110110000,
            0b0000000000110000,
            0b0000000000110000,
            0b0000000000110000,
            0b0000000000110000,
            0b0000000000110000,
            0b0000000000110000,
            0b0000000000110111,
            0b0000000000110101,
            0b0000000000110111,
        },
    },
    {
        .width = 11,
        .height = FONT_HEIGHT_RADIOSTARS,
        .data = {
            0b0000001111111110,
            0b0000011111111111,
            0b0000011100000000,
            0b0000001110000000,
            0b0000000111000000,
            0b0000000011100011,
            0b0000011001110111,
            0b0000011000111110,
            0b0000011000011100,
            0b0000011100111110,
            0b0000001111110111,
            0b0000001111100011,
        },
    },
    {
        .width = 3,
        .height = FONT_HEIGHT_RADIOSTARS,
        .data = {
            0b0000000000000111,
            0b0000000000000111,
            0b0000000000000111,
            0b0000000000000111,
            0b0000000000000111,
            0b0000000000000000,
            0b0000000000000000,
            0b0000000000000000,
            0b0000000000000000,
            0b0000000000000000,
            0b0000000000000000,
            0b0000000000000000,
        },
    },
    {
        .width = 5,
        .height = FONT_HEIGHT_RADIOSTARS,
        .data = {
            0b0000000000001111,
            0b0000000000011111,
            0b0000000000011110,
            0b0000000000011100,
            0b0000000000011100,
            0b0000000000011100,
            0b0000000000011100,
            0b0000000000011100,
            0b0000000000011100,
            0b0000000000011110,
            0b0000000000011111,
            0b0000000000001111,
        },
    },
    {
        .width = 5,
        .height = FONT_HEIGHT_RADIOSTARS,
        .data = {
            0b0000000000011110,
            0b0000000000011111,
            0b0000000000001111,
            0b0000000000000111,
            0b0000000000000111,
            0b0000000000000111,
            0b0000000000000111,
            0b0000000000000111,
            0b0000000000000111,
            0b0000000000001111,
            0b0000000000011111,
            0b0000000000011110,
        },
    },
    {
        .width = 7,
        .height = FONT_HEIGHT_RADIOSTARS,
        .data = {
            0b0000000000000000,
            0b0000000000000000,
            0b0000000000000000,
            0b0000000000110110,
            0b0000000000011100,
            0b0000000001111111,
            0b0000000001111111,
            0b0000000000011100,
            0b0000000000110110,
            0b0000000000000000,
            0b0000000000000000,
            0b0000000000000000,
        },
    },
    {
        .width = 8,
        .height = FONT_HEIGHT_RADIOSTARS,
        .data = {
            0b0000000000000000,
            0b0000000000000000,
            0b0000000000011000,
            0b0000000000011000,
            0b0000000000011000,
            0b0000000011111111,
            0b0000000011111111,
            0b0000000000011000,
            0b0000000000011000,
            0b0000000000011000,
            0b0000000000000000,
            0b0000000000000000,
        },
    },
    {
        .width = 3,
        .height = FONT_HEIGHT_RADIOSTARS,
        .data = {
            0b0000000000000000,
            0b0000000000000000,
            0b0000000000000000,
            0b0000000000000000,
            0b0000000000000000,
            0b0000000000000000,
            0b0000000000000000,
            0b0000000000000111,
            0b0000000000000111,
            0b0000000000000111,
            0b0000000000000111,
            0b0000000000000111,
        },
    },
    {
        .width = 8,
        .height = FONT_HEIGHT_RADIOSTARS,
        .data = {
            0b0000000000000000,
            0b0000000000000000,
            0b0000000000000000,
            0b0000000000000000,
            0b0000000000000000,
            0b0000000011111111,
            0b0000000011111111,
            0b0000000000000000,
            0b0000000000000000,
            0b0000000000000000,
            0b0000000000000000,
            0b0000000000000000,
        },
    },
    {
        .width = 3,
        .height = FONT_HEIGHT_RADIOSTARS,
        .data = {
            0b0000000000000000,
            0b0000000000000000,
            0b0000000000000000,
            0b0000000000000000,
            0b0000000000000000,
            0b0000000000000000,
            0b0000000000000000,
            0b0000000000000000,
            0b0000000000000000,
            0b0000000000000111,
            0b0000000000000111,
            0b0000000000000111,
        },
    },
    {
        .width = 11,
        .height = FONT_HEIGHT_RADIOSTARS,
        .data = {
            0b0000000000000000,
            0b0000000000000011,
            0b0000000000000111,
            0b0000000000001110,
            0b0000000000011100,
            0b0000000000111000,
            0b0000000001110000,
            0b0000000011100000,
            0b0000000111000000,
            0b0000001110000000,
            0b0000011100000000,
            0b0000011000000000,
        },
    },
    {
        .width = 11,
        .height = FONT_HEIGHT_RADIOSTARS,
        .data = {
            0b0000001111111110,
            0b0000011111111111,
            0b0000011111111111,
            0b0000011100000111,
            0b0000011100000111,
            0b0000011100000111,
            0b0000011100000111,
            0b0000011100000111,
            0b0000011100000111,
            0b0000011111111111,
            0b0000011111111111,
            0b0000001111111110,
        },
    },
    {
        .width = 11,
        .height = FONT_HEIGHT_RADIOSTARS,
        .data = {
            0b0000000000011000,
            0b0000000000111000,
            0b0000000001111000,
            0b0000000011111000,
            0b0000000011111000,
            0b0000000000111000,
            0b0000000000111000,
            0b0000000000111000,
            0b0000000000111000,
            0b0000000000111000,
            0b0000000000111000,
            0b0000000000111000,
        },
    },
    {
        .width = 11,
        .height = FONT_HEIGHT_RADIOSTARS,
        .data = {
            0b0000001111111110,
            0b0000011111111111,
            0b0000011111111111,
            0b0000000000000111,
            0b0000000000000111,
            0b0000001111111111,
            0b0000011111111110,
            0b0000011100000000,
            0b0000011100000000,
            0b0000011111111111,
            0b0000011111111111,
            0b0000011111111110,
        },
    },
    {
        .width = 11,
        .height = FONT_HEIGHT_RADIOSTARS,
        .data = {
            0b0000001111111110,
            0b0000011111111111,
            0b0000011111111111,
            0b0000000000000111,
            0b0000000000000111,
            0b0000011111111110,
            0b0000011111111110,
            0b0000000000000111,
            0b0000000000000111,
            0b0000011111111111,
            0b0000011111111111,
            0b0000001111111110,
        },
    },
    {
        .width = 11,
        .height = FONT_HEIGHT_RADIOSTARS,
        .data = {
            0b0000001100000110,
            0b0000011100000111,
            0b0000011100000111,
            0b0000011100000111,
            0b0000011100000111,
            0b0000011111111111,
            0b0000011111111111,
            0b0000000000000111,
            0b0000000000000111,
            0b0000000000000111,
            0b0000000000000111,
            0b0000000000000110,
        },
    },
    {
        .width = 11,
        .height = FONT_HEIGHT_RADIOSTARS,
        .data = {
            0b0000011111111110,
            0b0000011111111111,
            0b0000011111111111,
            0b0000011100000000,
            0b0000011100000000,
            0b0000011111111110,
            0b0000011111111111,
            0b0000000000000111,
            0b0000000000000111,
            0b0000011111111111,
            0b0000011111111111,
            0b0000001111111110,
        },
    },
    {
        .width = 11,
        .height = FONT_HEIGHT_RADIOSTARS,
        .data = {
            0b0000001111111110,
            0b0000011111111111,
            0b0000011111111111,
            0b0000011100000000,
            0b0000011100000000,
            0b0000011111111110,
            0b0000011111111111,
            0b0000011100000111,
            0b0000011100000111,
            0b0000011111111111,
            0b0000011111111111,
            0b0000001111111110,
        },
    },
    {
        .width = 11,
        .height = FONT_HEIGHT_RADIOSTARS,
        .data = {
            0b0000001111111110,
            0b0000011111111111,
            0b0000011111111111,
            0b0000000000001110,
            0b0000000000011100,
            0b0000000000111000,
            0b0000000001110000,
            0b0000000011100000,
            0b0000000111000000,
            0b0000001110000000,
            0b0000011100000000,
            0b0000011000000000,
        },
    },
    {
        .width = 11,
        .height = FONT_HEIGHT_RADIOSTARS,
        .data = {
            0b0000001111111110,
            0b0000011111111111,
            0b0000011111111111,
            0b0000011100000111,
            0b0000011100000111,
            0b0000001111111110,
            0b0000001111111110,
            0b0000011100000111,
            0b0000011100000111,
            0b0000011111111111,
            0b0000011111111111,
            0b0000001111111110,
        },
    },
    {
        .width = 11,
        .height = FONT_HEIGHT_RADIOSTARS,
        .data = {
            0b0000001111111110,
            0b0000011111111111,
            0b0000011111111111,
            0b0000011100000111,
            0b0000011100000111,
            0b0000011111111111,
            0b0000001111111111,
            0b0000000000000111,
            0b0000000000000111,
            0b0000011111111111,
            0b0000011111111111,
            0b0000001111111110,
        },
    },
    {
        .width = 3,
        .height = FONT_HEIGHT_RADIOSTARS,
        .data = {
            0b0000000000000000,
            0b0000000000000000,
            0b0000000000000111,
            0b0000000000000111,
            0b0000000000000111,
            0b0000000000000000,
            0b0000000000000000,
            0b0000000000000111,
            0b0000000000000111,
            0b0000000000000111,
            0b0000000000000000,
            0b0000000000000000,
        },
    },
    {
        .width = 3,
        .height = FONT_HEIGHT_RADIOSTARS,
        .data = {
            0b0000000000000000,
            0b0000000000000000,
            0b0000000000000111,
            0b0000000000000111,
            0b0000000000000111,
            0b0000000000000000,
            0b0000000000000000,
            0b0000000000000111,
            0b0000000000000111,
            0b0000000000000111,
            0b0000000000000111,
            0b0000000000000111,
        },
    },
    {
        .width = 7,
        .height = FONT_HEIGHT_RADIOSTARS,
        .data = {
            0b0000000000000011,
            0b0000000000000111,
            0b0000000000001111,
            0b0000000000011110,
            0b0000000000111100,
            0b0000000001111000,
            0b0000000001111000,
            0b0000000000111100,
            0b0000000000011110,
            0b0000000000001111,
            0b0000000000000111,
            0b0000000000000011,
        },
    },
    {
        .width = 8,
        .height = FONT_HEIGHT_RADIOSTARS,
        .data = {
            0b0000000000000000,
            0b0000000000000000,
            0b0000000011111111,
            0b0000000011111111,
            0b0000000011111111,
            0b0000000000000000,
            0b0000000000000000,
            0b0000000011111111,
            0b0000000011111111,
            0b0000000011111111,
            0b0000000000000000,
            0b0000000000000000,
        },
    },
    {
        .width = 7,
        .height = FONT_HEIGHT_RADIOSTARS,
        .data = {
            0b0000000001100000,
            0b0000000001110000,
            0b0000000001111000,
            0b0000000000111100,
            0b0000000000011110,
            0b0000000000001111,
            0b0000000000001111,
            0b0000000000011110,
            0b0000000000111100,
            0b0000000001111000,
            0b0000000001110000,
            0b0000000001100000,
        },
    },
    {
        .width = 11,
        .height = FONT_HEIGHT_RADIOSTARS,
        .data = {
            0b0000001111111110,
            0b0000011111111111,
            0b0000011111111111,
            0b0000000000000111,
            0b0000000000000111,
            0b0000000000111111,
            0b0000000001111111,
            0b0000000001111110,
            0b0000000000000000,
            0b0000000001110000,
            0b0000000001110000,
            0b0000000001110000,
        },
    },
    {
        .width = 12,
        .height = FONT_HEIGHT_RADIOSTARS,
        .data = {
            0b0000011111111110,
            0b0000111111111111,
            0b0000110000000011,
            0b0000110011110011,
            0b0000110111111011,
            0b0000110110011011,
            0b0000110110011011,
            0b0000110111111011,
            0b0000110011110011,
            0b0000110000111011,
            0b0000111000111111,
            0b0000011000011110,
        },
    },
    {
        .width = 11,
        .height = FONT_HEIGHT_RADIOSTARS,
        .data = {
            0b0000000000100000,
            0b0000000001110000,
            0b0000000001110000,
            0b0000000011111000,
            0b0000000011011000,
            0b0000000011011000,
            0b0000000110001100,
            0b0000000111111100,
            0b0000001111111110,
            0b0000001110001110,
            0b0000011100000111,
            0b0000011100000111,
        },
    },
    {
        .width = 11,
        .height = FONT_HEIGHT_RADIOSTARS,
        .data = {
            0b0000011111111110,
            0b0000011111111111,
            0b0000011111111111,
            0b0000011100000111,
            0b0000011100000111,
            0b0000011111111110,
            0b0000011111111110,
            0b0000011100000111,
            0b0000011100000111,
            0b0000011111111111,
            0b0000011111111111,
            0b0000011111111110,
        },
    },
    {
        .width = 11,
        .height = FONT_HEIGHT_RADIOSTARS,
        .data = {
            0b0000001111111110,
            0b0000011111111111,
            0b0000011111111111,
            0b0000011100000000,
            0b0000011100000000,
            0b0000011100000000,
            0b0000011100000000,
            0b0000011100000000,
            0b0000011100000000,
            0b0000011111111111,
            0b0000011111111111,
            0b0000001111111110,
        },
    },
    {
        .width = 11,
        .height = FONT_HEIGHT_RADIOSTARS,
        .data = {
            0b0000011110000000,
            0b0000011111100000,
            0b0000011111111000,
            0b0000011101111100,
            0b0000011100011110,
            0b0000011100001110,
            0b0000011100001110,
            0b0000011100000111,
            0b0000011100000111,
            0b0000011111111111,
            0b0000011111111111,
            0b0000011111111110,
        },
    },
    {
        .width = 11,
        .height = FONT_HEIGHT_RADIOSTARS,
        .data = {
            0b0000001111111110,
            0b0000011111111111,
            0b0000011111111111,
            0b0000011100000000,
            0b0000011100000000,
            0b0000011111111111,
            0b0000011111111111,
            0b0000011100000000,
            0b0000011100000000,
            0b0000011111111111,
            0b0000011111111111,
            0b0000001111111110,
        },
    },
    {
        .width = 11,
        .height = FONT_HEIGHT_RADIOSTARS,
        .data = {
            0b0000001111111110,
            0b0000011111111111,
            0b0000011111111111,
            0b0000011100000000,
            0b0000011100000000,
            0b0000011111111111,
            0b0000011111111111,
            0b0000011100000000,
            0b0000011100000000,
            0b0000011100000000,
            0b0000011100000000,
            0b0000001100000000,
        },
    },
    {
        .width = 11,
        .height = FONT_HEIGHT_RADIOSTARS,
        .data = {
            0b0000001111111110,
            0b0000011111111111,
            0b0000011111111111,
            0b0000011100000000,
            0b0000011100000000,
            0b0000011100111111,
            0b0000011100111111,
            0b0000011100000111,
            0b0000011100000111,
            0b0000011111111111,
            0b0000011111111111,
            0b0000001111111110,
        },
    },
    {
        .width = 11,
        .height = FONT_HEIGHT_RADIOSTARS,
        .data = {
            0b0000001100000110,
            0b0000011100000111,
            0b0000011100000111,
            0b0000011100000111,
            0b0000011100000111,
            0b0000011111111111,
            0b0000011111111111,
            0b0000011100000111,
            0b0000011100000111,
            0b0000011100000111,
            0b0000011100000111,
            0b0000001100000110,
        },
    },
    {
        .width = 3,
        .height = FONT_HEIGHT_RADIOSTARS,
        .data = {
            0b0000000000000111,
            0b0000000000000111,
            0b0000000000000111,
            0b0000000000000111,
            0b0000000000000111,
            0b0000000000000111,
            0b0000000000000111,
            0b0000000000000111,
            0b0000000000000111,
            0b0000000000000111,
            0b0000000000000111,
            0b0000000000000111,
        },
    },
    {
        .width = 11,
        .height = FONT_HEIGHT_RADIOSTARS,
        .data = {
            0b0000000000000110,
            0b0000000000000111,
            0b0000000000000111,
            0b0000000000000111,
            0b0000000000000111,
            0b0000000000000111,
            0b0000000000000111,
            0b0000000000000111,
            0b0000000000000111,
            0b0000011111111111,
            0b0000011111111111,
            0b0000001111111110,
        },
    },
    {
        .width = 11,
        .height = FONT_HEIGHT_RADIOSTARS,
        .data = {
            0b0000001100000111,
            0b0000011100001110,
            0b0000011100011100,
            0b0000011100111000,
            0b0000011101110000,
            0b0000011111111110,
            0b0000011111111111,
            0b0000011100000111,
            0b0000011100000111,
            0b0000011100000111,
            0b0000011100000111,
            0b0000001100000110,
        },
    },
    {
        .width = 11,
        .height = FONT_HEIGHT_RADIOSTARS,
        .data = {
            0b0000001100000000,
            0b0000011100000000,
            0b0000011100000000,
            0b0000011100000000,
            0b0000011100000000,
            0b0000011100000000,
            0b0000011100000000,
            0b0000011100000000,
            0b0000011100000000,
            0b0000011111111111,
            0b0000011111111111,
            0b0000001111111110,
        },
    },
    {
        .width = 11,
        .height = FONT_HEIGHT_RADIOSTARS,
        .data = {
            0b0000001000000010,
            0b0000011100000111,
            0b0000011110001111,
            0b0000011110001111,
            0b0000011011011011,
            0b0000011011011011,
            0b0000011011011011,
            0b0000011001110011,
            0b0000011001110011,
            0b0000011001110011,
            0b0000011000100011,
            0b0000001000100010,
        },
    },
    {
        .width = 11,
        .height = FONT_HEIGHT_RADIOSTARS,
        .data = {
            0b0000001100000110,
            0b0000011110000111,
            0b0000011111000111,
            0b0000011111000111,
            0b0000011101100111,
            0b0000011101100111,
            0b0000011100110111,
            0b0000011100110111,
            0b0000011100011111,
            0b0000011100011111,
            0b0000011100001111,
            0b0000001100000110,
        },
    },
    {
        .width = 11,
        .height = FONT_HEIGHT_RADIOSTARS,
        .data = {
            0b0000001111111110,
            0b0000011111111111,
            0b0000011111111111,
            0b0000011100000111,
            0b0000011100000111,
            0b0000011100000111,
            0b0000011100000111,
            0b0000011100000111,
            0b0000011100000111,
            0b0000011111111111,
            0b0000011111111111,
            0b0000001111111110,
        },
    },
    {
        .width = 11,
        .height = FONT_HEIGHT_RADIOSTARS,
        .data = {
            0b0000011111111110,
            0b0000011111111111,
            0b0000011111111111,
            0b0000011100000111,
            0b0000011100000111,
            0b0000011111111111,
            0b0000011111111110,
            0b0000011100000000,
            0b0000011100000000,
            0b0000011100000000,
            0b0000011100000000,
            0b0000001100000000,
        },
    },
    {
        .width = 11,
        .height = FONT_HEIGHT_RADIOSTARS,
        .data = {
            0b0000001111111000,
            0b0000011111111100,
            0b0000011111111100,
            0b0000011100011100,
            0b0000011100011100,
            0b0000011100011100,
            0b0000011100011100,
            0b0000011100011100,
            0b0000011100011100,
            0b0000011111111111,
            0b0000011111111111,
            0b0000001111111110,
        },
    },
    {
        .width = 11,
        .height = FONT_HEIGHT_RADIOSTARS,
        .data = {
            0b0000001111111110,
            0b0000011111111111,
            0b0000011111111111,
            0b0000011100000111,
            0b0000011100000111,
            0b0000011111111111,
            0b0000011111111110,
            0b0000011101110000,
            0b0000011100111000,
            0b0000011100011100,
            0b0000011100001110,
            0b0000001100000111,
        },
    },
    {
        .width = 11,
        .height = FONT_HEIGHT_RADIOSTARS,
        .data = {
            0b0000001111111110,
            0b0000011111111111,
            0b0000011111111111,
            0b0000011100000000,
            0b0000011100000000,
            0b0000011111111110,
            0b0000001111111111,
            0b0000000000000111,
            0b0000000000000111,
            0b0000011111111111,
            0b0000011111111111,
            0b0000001111111110,
        },
    },
    {
        .width = 11,
        .height = FONT_HEIGHT_RADIOSTARS,
        .data = {
            0b0000001111111110,
            0b0000011111111111,
            0b0000011111111111,
            0b0000000001110000,
            0b0000000001110000,
            0b0000000001110000,
            0b0000000001110000,
            0b0000000001110000,
            0b0000000001110000,
            0b0000000001110000,
            0b0000000001110000,
            0b0000000001110000,
        },
    },
    {
        .width = 11,
        .height = FONT_HEIGHT_RADIOSTARS,
        .data = {
            0b0000001100000110,
            0b0000011100000111,
            0b0000011100000111,
            0b0000011100000111,
            0b0000011100000111,
            0b0000011100000111,
            0b0000011100000111,
            0b0000011100000111,
            0b0000011100000111,
            0b0000011111111111,
            0b0000011111111111,
            0b0000001111111110,
        },
    },
    {
        .width = 11,
        .height = FONT_HEIGHT_RADIOSTARS,
        .data = {
            0b0000011100000111,
            0b0000011100000111,
            0b0000001110001110,
            0b0000001110001110,
            0b0000000111011100,
            0b0000000111011100,
            0b0000000011011000,
            0b0000000011111000,
            0b0000000011111000,
            0b0000000001110000,
            0b0000000001110000,
            0b0000000000100000,
        },
    },
    {
        .width = 11,
        .height = FONT_HEIGHT_RADIOSTARS,
        .data = {
            0b0000001000100010,
            0b0000011000100011,
            0b0000011001110011,
            0b0000011001110011,
            0b0000011001110011,
            0b0000011011011011,
            0b0000011011011011,
            0b0000011011011011,
            0b0000011110001111,
            0b0000011110001111,
            0b0000011100000111,
            0b0000001000000010,
        },
    },
    {
        .width = 11,
        .height = FONT_HEIGHT_RADIOSTARS,
        .data = {
            0b0000000000000000,
            0b0000011000000011,
            0b0000011100000111,
            0b0000001110001110,
            0b0000000111011100,
            0b0000000011111000,
            0b0000000001110000,
            0b0000000011111000,
            0b0000000111011100,
            0b0000001110001110,
            0b0000011100000111,
            0b0000011000000011,
        },
    },
    {
        .width = 11,
        .height = FONT_HEIGHT_RADIOSTARS,
        .data = {
            0b0000011000000011,
            0b0000011100000111,
            0b0000001110001110,
            0b0000000111011100,
            0b0000000011111000,
            0b0000000001110000,
            0b0000000001110000,
            0b0000000001110000,
            0b0000000001110000,
            0b0000000001110000,
            0b0000000001110000,
            0b0000000001110000,
        },
    },
    {
        .width = 10,
        .height = FONT_HEIGHT_RADIOSTARS,
        .data = {
            0b0000000111111111,
            0b0000001111111111,
            0b0000001111111111,
            0b0000000000001110,
            0b0000000000011100,
            0b0000000000111000,
            0b0000000001110000,
            0b0000000011100000,
            0b0000000111000000,
            0b0000001111111111,
            0b0000001111111111,
            0b0000001111111110,
        },
    },
    {
        .width = 5,
        .height = FONT_HEIGHT_RADIOSTARS,
        .data = {
            0b0000000000011111,
            0b0000000000011111,
            0b0000000000011111,
            0b0000000000011100,
            0b0000000000011100,
            0b0000000000011100,
            0b0000000000011100,
            0b0000000000011100,
            0b0000000000011100,
            0b0000000000011111,
            0b0000000000011111,
            0b0000000000011111,
        },
    },
    {
        .width = 11,
        .height = FONT_HEIGHT_RADIOSTARS,
        .data = {
            0b0000000000000000,
            0b0000011000000000,
            0b0000011100000000,
            0b0000001110000000,
            0b0000000111000000,
            0b0000000011100000,
            0b0000000001110000,
            0b0000000000111000,
            0b0000000000011100,
            0b0000000000001110,
            0b0000000000000111,
            0b0000000000000011,
        },
    },
    {
        .width = 5,
        .height = FONT_HEIGHT_RADIOSTARS,
        .data = {
            0b0000000000011111,
            0b0000000000011111,
            0b0000000000011111,
            0b0000000000000111,
            0b0000000000000111,
            0b0000000000000111,
            0b0000000000000111,
            0b0000000000000111,
            0b0000000000000111,
            0b0000000000011111,
            0b0000000000011111,
            0b0000000000011111,
        },
    },
    {
        .width = 11,
        .height = FONT_HEIGHT_RADIOSTARS,
        .data = {
            0b0000000000100000,
            0b0000000001110000,
            0b0000000011111000,
            0b0000000111111100,
            0b0000001111011110,
            0b0000011110001111,
            0b0000000000000000,
            0b0000000000000000,
            0b0000000000000000,
            0b0000000000000000,
            0b0000000000000000,
            0b0000000000000000,
        },
    },
    {
        .width = 8,
        .height = FONT_HEIGHT_RADIOSTARS,
        .data = {
            0b0000000000000000,
            0b0000000000000000,
            0b0000000000000000,
            0b0000000000000000,
            0b0000000000000000,
            0b0000000000000000,
            0b0000000000000000,
            0b0000000000000000,
            0b0000000000000000,
            0b0000000011111111,
            0b0000000011111111,
            0b0000000011111111,
        },
    },
    {
        .width = 2,
        .height = FONT_HEIGHT_RADIOSTARS,
        .data = {
            0b0000000000000000,
            0b0000000000000010,
            0b0000000000000011,
            0b0000000000000001,
            0b0000000000000000,
            0b0000000000000000,
            0b0000000000000000,
            0b0000000000000000,
            0b0000000000000000,
            0b0000000000000000,
            0b0000000000000000,
            0b0000000000000000,
        },
    },
    {
        .width = 6,
        .height = FONT_HEIGHT_RADIOSTARS,
        .data = {
            0b0000000000001111,
            0b0000000000011111,
            0b0000000000011110,
            0b0000000000011100,
            0b0000000000011100,
            0b0000000000111000,
            0b0000000000111000,
            0b0000000000011100,
            0b0000000000011100,
            0b0000000000011110,
            0b0000000000011111,
            0b0000000000001111,
        },
    },
    {
        .width = 3,
        .height = FONT_HEIGHT_RADIOSTARS,
        .data = {
            0b0000000000000111,
            0b0000000000000111,
            0b0000000000000111,
            0b0000000000000111,
            0b0000000000000111,
            0b0000000000000111,
            0b0000000000000111,
            0b0000000000000111,
            0b0000000000000111,
            0b0000000000000111,
            0b0000000000000111,
            0b0000000000000111,
        },
    },
    {
        .width = 6,
        .height = FONT_HEIGHT_RADIOSTARS,
        .data = {
            0b0000000000111100,
            0b0000000000111110,
            0b0000000000011110,
            0b0000000000001110,
            0b0000000000001110,
            0b0000000000000111,
            0b0000000000000111,
            0b0000000000001110,
            0b0000000000001110,
            0b0000000000011110,
            0b0000000000111110,
            0b0000000000111100,
        },
    },
    {
        .width = 9,
        .height = FONT_HEIGHT_RADIOSTARS,
        .data = {
            0b0000000000000000,
            0b0000000000100011,
            0b0000000001110110,
            0b0000000011011100,
            0b0000000110001000,
            0b0000000000000000,
            0b0000000000000000,
            0b0000000000000000,
            0b0000000000000000,
            0b0000000000000000,
            0b0000000000000000,
            0b0000000000000000,
        },
    },
};

#endif