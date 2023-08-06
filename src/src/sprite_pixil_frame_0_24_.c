#pragma bank 255
// SpriteSheet: pixil-frame-0 (24)

#include "gbs_types.h"
#include "data/sprite_pixil_frame_0_24__tileset.h"

BANKREF(sprite_pixil_frame_0_24_)

#define SPRITE_16_STATE_DEFAULT 0
#define SPRITE_16_STATE_OPENED 0
#define SPRITE_16_STATE_SWORD 0
#define SPRITE_16_STATE_PRESSED 0

const metasprite_t sprite_pixil_frame_0_24__metasprite_0[]  = {
    { 0, 8, 0, 1 }, { 0, -8, 2, 1 },
    {metasprite_end}
};

const metasprite_t sprite_pixil_frame_0_24__metasprite_1[]  = {
    { 1, 8, 0, 1 }, { 0, -8, 2, 1 },
    {metasprite_end}
};

const metasprite_t sprite_pixil_frame_0_24__metasprite_2[]  = {
    { 2, 8, 0, 1 }, { 0, -8, 2, 1 },
    {metasprite_end}
};

const metasprite_t * const sprite_pixil_frame_0_24__metasprites[] = {
    sprite_pixil_frame_0_24__metasprite_0,
    sprite_pixil_frame_0_24__metasprite_1,
    sprite_pixil_frame_0_24__metasprite_2,
    sprite_pixil_frame_0_24__metasprite_1,
    sprite_pixil_frame_0_24__metasprite_0
};

const struct animation_t sprite_pixil_frame_0_24__animations[] = {
    {
        .start = 0,
        .end = 4
    },
    {
        .start = 0,
        .end = 4
    },
    {
        .start = 0,
        .end = 4
    },
    {
        .start = 0,
        .end = 4
    },
    {
        .start = 0,
        .end = 4
    },
    {
        .start = 0,
        .end = 4
    },
    {
        .start = 0,
        .end = 4
    },
    {
        .start = 0,
        .end = 4
    }
};

const UWORD sprite_pixil_frame_0_24__animations_lookup[] = {
    SPRITE_16_STATE_DEFAULT
};

const struct spritesheet_t sprite_pixil_frame_0_24_ = {
    .n_metasprites = 5,
    .emote_origin = {
        .x = 0,
        .y = -16
    },
    .metasprites = sprite_pixil_frame_0_24__metasprites,
    .animations = sprite_pixil_frame_0_24__animations,
    .animations_lookup = sprite_pixil_frame_0_24__animations_lookup,
    .bounds = {
        .left = 0,
        .bottom = 7,
        .right = 15,
        .top = -8
    },
    .tileset = TO_FAR_PTR_T(sprite_pixil_frame_0_24__tileset),
    .cgb_tileset = { NULL, NULL }
};
