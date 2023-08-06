#pragma bank 255
// SpriteSheet: pixil-frame-0 (31)

#include "gbs_types.h"
#include "data/sprite_pixil_frame_0_31__tileset.h"

BANKREF(sprite_pixil_frame_0_31_)

#define SPRITE_12_STATE_DEFAULT 0
#define SPRITE_12_STATE_OPENED 0
#define SPRITE_12_STATE_SWORD 0
#define SPRITE_12_STATE_PRESSED 8

const metasprite_t sprite_pixil_frame_0_31__metasprite_0[]  = {
    { 3, 14, 0, 5 }, { -16, 0, 2, 5 }, { 16, -8, 4, 5 }, { -16, 0, 6, 5 }, { 16, -8, 8, 5 }, { -16, 0, 10, 5 }, { 16, -8, 12, 5 }, { -16, 0, 14, 5 },
    {metasprite_end}
};

const metasprite_t sprite_pixil_frame_0_31__metasprite_1[]  = {
    { 3, 13, 16, 5 }, { -16, 0, 18, 5 }, { 16, -8, 20, 5 }, { -16, 0, 22, 5 }, { 16, -8, 24, 5 }, { -16, 0, 26, 5 },
    {metasprite_end}
};

const metasprite_t * const sprite_pixil_frame_0_31__metasprites[] = {
    sprite_pixil_frame_0_31__metasprite_0,
    sprite_pixil_frame_0_31__metasprite_1
};

const struct animation_t sprite_pixil_frame_0_31__animations[] = {
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

const UWORD sprite_pixil_frame_0_31__animations_lookup[] = {
    SPRITE_12_STATE_DEFAULT,
    SPRITE_12_STATE_OPENED,
    SPRITE_12_STATE_SWORD,
    SPRITE_12_STATE_PRESSED
};

const struct spritesheet_t sprite_pixil_frame_0_31_ = {
    .n_metasprites = 2,
    .emote_origin = {
        .x = 0,
        .y = -32
    },
    .metasprites = sprite_pixil_frame_0_31__metasprites,
    .animations = sprite_pixil_frame_0_31__animations,
    .animations_lookup = sprite_pixil_frame_0_31__animations_lookup,
    .bounds = {
        .left = 0,
        .bottom = 7,
        .right = 15,
        .top = -8
    },
    .tileset = TO_FAR_PTR_T(sprite_pixil_frame_0_31__tileset),
    .cgb_tileset = { NULL, NULL }
};
