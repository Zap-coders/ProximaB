#pragma bank 255
// SpriteSheet: pixil-frame-0 (9)

#include "gbs_types.h"
#include "data/sprite_pixil_frame_0_9__tileset.h"

BANKREF(sprite_pixil_frame_0_9_)

#define SPRITE_0_STATE_DEFAULT 0
#define SPRITE_0_STATE_OPENED 0
#define SPRITE_0_STATE_SWORD 0
#define SPRITE_0_STATE_PRESSED 0

const metasprite_t sprite_pixil_frame_0_9__metasprite_0[]  = {
    { 0, 6, 4, 0 }, { 0, -8, 6, 0 },
    {metasprite_end}
};

const metasprite_t sprite_pixil_frame_0_9__metasprite_1[]  = {
    { 4, 8, 0, 0 }, { 0, -8, 2, 0 },
    {metasprite_end}
};

const metasprite_t sprite_pixil_frame_0_9__metasprite_2[]  = {
    { 0, 11, 4, 0 }, { 0, -8, 6, 0 },
    {metasprite_end}
};

const metasprite_t * const sprite_pixil_frame_0_9__metasprites[] = {
    sprite_pixil_frame_0_9__metasprite_0,
    sprite_pixil_frame_0_9__metasprite_1,
    sprite_pixil_frame_0_9__metasprite_2
};

const struct animation_t sprite_pixil_frame_0_9__animations[] = {
    {
        .start = 0,
        .end = 0
    },
    {
        .start = 1,
        .end = 1
    },
    {
        .start = 2,
        .end = 2
    },
    {
        .start = 1,
        .end = 1
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
        .start = 2,
        .end = 2
    },
    {
        .start = 1,
        .end = 1
    }
};

const UWORD sprite_pixil_frame_0_9__animations_lookup[] = {
    SPRITE_0_STATE_DEFAULT
};

const struct spritesheet_t sprite_pixil_frame_0_9_ = {
    .n_metasprites = 3,
    .emote_origin = {
        .x = 0,
        .y = -16
    },
    .metasprites = sprite_pixil_frame_0_9__metasprites,
    .animations = sprite_pixil_frame_0_9__animations,
    .animations_lookup = sprite_pixil_frame_0_9__animations_lookup,
    .bounds = {
        .left = 0,
        .bottom = 7,
        .right = 15,
        .top = -8
    },
    .tileset = TO_FAR_PTR_T(sprite_pixil_frame_0_9__tileset),
    .cgb_tileset = { NULL, NULL }
};
