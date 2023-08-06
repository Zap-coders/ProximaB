#pragma bank 255
// SpriteSheet: pixil-frame-0 (26)

#include "gbs_types.h"
#include "data/sprite_pixil_frame_0_26__tileset.h"

BANKREF(sprite_pixil_frame_0_26_)

#define SPRITE_14_STATE_DEFAULT 0
#define SPRITE_14_STATE_OPENED 8
#define SPRITE_14_STATE_SWORD 0
#define SPRITE_14_STATE_PRESSED 0

const metasprite_t sprite_pixil_frame_0_26__metasprite_0[]  = {
    { 2, 7, 0, 4 }, { 0, -8, 2, 4 },
    {metasprite_end}
};

const metasprite_t sprite_pixil_frame_0_26__metasprite_1[]  = {
    { 2, 14, 4, 4 }, { 0, -8, 6, 4 }, { 0, -8, 8, 4 },
    {metasprite_end}
};

const metasprite_t * const sprite_pixil_frame_0_26__metasprites[] = {
    sprite_pixil_frame_0_26__metasprite_0,
    sprite_pixil_frame_0_26__metasprite_1
};

const struct animation_t sprite_pixil_frame_0_26__animations[] = {
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

const UWORD sprite_pixil_frame_0_26__animations_lookup[] = {
    SPRITE_14_STATE_DEFAULT,
    SPRITE_14_STATE_OPENED
};

const struct spritesheet_t sprite_pixil_frame_0_26_ = {
    .n_metasprites = 2,
    .emote_origin = {
        .x = 0,
        .y = -32
    },
    .metasprites = sprite_pixil_frame_0_26__metasprites,
    .animations = sprite_pixil_frame_0_26__animations,
    .animations_lookup = sprite_pixil_frame_0_26__animations_lookup,
    .bounds = {
        .left = 0,
        .bottom = 23,
        .right = 23,
        .top = -18
    },
    .tileset = TO_FAR_PTR_T(sprite_pixil_frame_0_26__tileset),
    .cgb_tileset = { NULL, NULL }
};
