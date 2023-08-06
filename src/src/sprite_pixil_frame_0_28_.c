#pragma bank 255
// SpriteSheet: pixil-frame-0 (27)

#include "gbs_types.h"
#include "data/sprite_pixil_frame_0_28__tileset.h"

BANKREF(sprite_pixil_frame_0_28_)

#define SPRITE_15_STATE_DEFAULT 0
#define SPRITE_15_STATE_OPENED 8
#define SPRITE_15_STATE_SWORD 0
#define SPRITE_15_STATE_PRESSED 0

const metasprite_t sprite_pixil_frame_0_28__metasprite_0[]  = {
    { 0, 7, 0, 4 }, { -16, 0, 2, 4 }, { 16, -8, 4, 4 }, { -16, 0, 6, 4 },
    {metasprite_end}
};

const metasprite_t sprite_pixil_frame_0_28__metasprite_1[]  = {
    { -16, 14, 8, 4 }, { 0, -8, 10, 4 }, { 0, -8, 12, 4 },
    {metasprite_end}
};

const metasprite_t * const sprite_pixil_frame_0_28__metasprites[] = {
    sprite_pixil_frame_0_28__metasprite_0,
    sprite_pixil_frame_0_28__metasprite_1
};

const struct animation_t sprite_pixil_frame_0_28__animations[] = {
    {
        .start = 0,
        .end = 0
    },
    {
        .start = 0,
        .end = 0
    },
    {
        .start = 0,
        .end = 0
    },
    {
        .start = 0,
        .end = 0
    },
    {
        .start = 0,
        .end = 0
    },
    {
        .start = 0,
        .end = 0
    },
    {
        .start = 0,
        .end = 0
    },
    {
        .start = 0,
        .end = 0
    },
    {
        .start = 1,
        .end = 1
    },
    {
        .start = 1,
        .end = 1
    },
    {
        .start = 1,
        .end = 1
    },
    {
        .start = 1,
        .end = 1
    },
    {
        .start = 1,
        .end = 1
    },
    {
        .start = 1,
        .end = 1
    },
    {
        .start = 1,
        .end = 1
    },
    {
        .start = 1,
        .end = 1
    }
};

const UWORD sprite_pixil_frame_0_28__animations_lookup[] = {
    SPRITE_15_STATE_DEFAULT,
    SPRITE_15_STATE_OPENED
};

const struct spritesheet_t sprite_pixil_frame_0_28_ = {
    .n_metasprites = 2,
    .emote_origin = {
        .x = 0,
        .y = -32
    },
    .metasprites = sprite_pixil_frame_0_28__metasprites,
    .animations = sprite_pixil_frame_0_28__animations,
    .animations_lookup = sprite_pixil_frame_0_28__animations_lookup,
    .bounds = {
        .left = 0,
        .bottom = 7,
        .right = 23,
        .top = -31
    },
    .tileset = TO_FAR_PTR_T(sprite_pixil_frame_0_28__tileset),
    .cgb_tileset = { NULL, NULL }
};
