#pragma bank 255
// SpriteSheet: pixil-frame-0 (28)

#include "gbs_types.h"
#include "data/sprite_pixil_frame_0_30__tileset.h"

BANKREF(sprite_pixil_frame_0_30_)

#define SPRITE_10_STATE_DEFAULT 0
#define SPRITE_10_STATE_OPENED 8
#define SPRITE_10_STATE_SWORD 0
#define SPRITE_10_STATE_PRESSED 0

const metasprite_t sprite_pixil_frame_0_30__metasprite_0[]  = {
    { 3, 17, 0, 4 }, { -16, 0, 2, 4 }, { 16, -8, 4, 4 }, { -16, 0, 6, 4 },
    {metasprite_end}
};

const metasprite_t sprite_pixil_frame_0_30__metasprite_1[]  = {
    { 3, 23, 8, 4 }, { -16, 0, 10, 4 }, { 16, -8, 12, 4 }, { -16, 0, 14, 4 },
    {metasprite_end}
};

const metasprite_t * const sprite_pixil_frame_0_30__metasprites[] = {
    sprite_pixil_frame_0_30__metasprite_0,
    sprite_pixil_frame_0_30__metasprite_1
};

const struct animation_t sprite_pixil_frame_0_30__animations[] = {
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

const UWORD sprite_pixil_frame_0_30__animations_lookup[] = {
    SPRITE_10_STATE_DEFAULT,
    SPRITE_10_STATE_OPENED
};

const struct spritesheet_t sprite_pixil_frame_0_30_ = {
    .n_metasprites = 2,
    .emote_origin = {
        .x = 0,
        .y = -32
    },
    .metasprites = sprite_pixil_frame_0_30__metasprites,
    .animations = sprite_pixil_frame_0_30__animations,
    .animations_lookup = sprite_pixil_frame_0_30__animations_lookup,
    .bounds = {
        .left = -1,
        .bottom = 0,
        .right = 40,
        .top = -15
    },
    .tileset = TO_FAR_PTR_T(sprite_pixil_frame_0_30__tileset),
    .cgb_tileset = { NULL, NULL }
};
