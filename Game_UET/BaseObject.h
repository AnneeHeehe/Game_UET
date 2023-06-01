#ifndef BASEOBJECT_H
#define BASEOBJECT_H

#include <cstdlib>
#include <cstdint>
#include <cstdio>
#include <cstring>
#include <cassert>

#include <SDL.h>
#include <SDL_ttf.h>
#include <SDL_image.h>
#include <SDL_mixer.h>
#include <iostream>


typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
typedef float f32;
typedef double f64;

#define WIDTH 10
#define HEIGHT 22
#define VISIBLE_HEIGHT 20

#define BOARD_NEXT_PIECE 5

#define GRID_SIZE 30
#define SCREEN_WIDTH 550
#define SCREEN_HEIGHT 720

#define ARRAY_COUNT(x) (sizeof(x) / sizeof((x)[0]))

#define BUTTON 180



#endif // !BASEOBJECT_H

