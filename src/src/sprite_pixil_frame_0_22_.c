#pragma bank 255
// SpriteSheet: pixil-frame-0 (22)

#include "gbs_types.h"
#include "data/sprite_pixil_frame_0_22__tileset.h"

BANKREF(sprite_pixil_frame_0_22_)

#define SPRITE_8_STATE_DEFAULT 0
#define SPRITE_8_STATE_OPENED 0
#define SPRITE_8_STATE_SWORD 0
#define SPRITE_8_STATE_PRESSED 0

const metasprite_t sprite_pixil_frame_0_22__metasprite_0[]  = {
    { 0, 28, 0, 4 }, { 0, -8, 2, 4 }, { 0, -8, 4, 4 }, { 0, -8, 6, 4 }, { 0, -8, 8, 4 }, { 0, -8, 10, 4 }, { 0, -8, 12, 4 },
    {metasprite_end}
};

const metasprite_t sprite_pixil_frame_0_22__metasprite_1[]  = {
    { 0, 28, 14, 4 }, { 0, -8, 16, 4 }, { 0, -8, 18, 4 }, { 0, -8, 20, 4 }, { 0, -8, 22, 4 }, { 0, -8, 24, 4 }, { 0, -8, 26, 4 },
    {metasprite_end}
};

const metasprite_t * const sprite_pixil_frame_0_22__metasprites[] = {
    sprite_pixil_frame_0_22__metasprite_0,
    sprite_pixil_frame_0_22__metasprite_1
};

const struct animation_t sprite_pixil_frame_0_22__animations[] = {
    {
        .start = 0,
        .end = 1
    },
    {
        .start = 0,
        .end = 1
    },
    {
        .start = 0,
        .end = 1
    },
    {
        .start = 0,
        .end = 1
    },
    {
        .start = 0,
        .end = 1
    },
    {
        .start = 0,
        .end = 1
    },
    {
        .start = 0,
        .end = 1
    },
    {
        .start = 0,
        .end = 1
    }
};

const UWORD sprite_pixil_frame_0_22__animations_lookup[] = {
    SPRITE_8_STATE_DEFAULT
};

const struct spritesheet_t sprite_pixil_frame_0_22_ = {
    .n_metasprites = 2,
    .emote_origin = {
        .x = 0,
        .y = -16
    },
    .metasprites = sprite_pixil_frame_0_22__metasprites,
    .animations = sprite_pixil_frame_0_22__animations,
    .animations_lookup = sprite_pixil_frame_0_22__animations_lookup,
    .bounds = {
        .left = 0,
        .bottom = 7,
        .right = 15,
        .top = -8
    },
    .tileset = TO_FAR_PTR_T(sprite_pixil_frame_0_22__tileset),
    .cgb_tileset = { NULL, NULL }
};
