#pragma bank 255
// SpriteSheet: pixil-frame-0 (1)

#include "gbs_types.h"
#include "data/sprite_pixil_frame_0_1__tileset.h"

BANKREF(sprite_pixil_frame_0_1_)

#define SPRITE_11_STATE_DEFAULT 0
#define SPRITE_11_STATE_OPENED 0
#define SPRITE_11_STATE_SWORD 0
#define SPRITE_11_STATE_PRESSED 0

const metasprite_t sprite_pixil_frame_0_1__metasprite_0[]  = {
    { 0, 8, 4, 3 }, { 0, -8, 6, 3 },
    {metasprite_end}
};

const metasprite_t sprite_pixil_frame_0_1__metasprite_1[]  = {
    { 0, 8, 0, 3 }, { 0, -8, 2, 3 },
    {metasprite_end}
};

const metasprite_t sprite_pixil_frame_0_1__metasprite_2[]  = {
    { 0, 0, 0, 35 }, { 0, 8, 2, 35 },
    {metasprite_end}
};

const metasprite_t sprite_pixil_frame_0_1__metasprite_3[]  = {
    { 0, 8, 8, 3 }, { 0, -8, 10, 3 },
    {metasprite_end}
};

const metasprite_t sprite_pixil_frame_0_1__metasprite_4[]  = {
    { 0, 0, 8, 35 }, { 0, 8, 10, 35 },
    {metasprite_end}
};

const metasprite_t * const sprite_pixil_frame_0_1__metasprites[] = {
    sprite_pixil_frame_0_1__metasprite_0,
    sprite_pixil_frame_0_1__metasprite_1,
    sprite_pixil_frame_0_1__metasprite_2,
    sprite_pixil_frame_0_1__metasprite_1,
    sprite_pixil_frame_0_1__metasprite_3,
    sprite_pixil_frame_0_1__metasprite_2,
    sprite_pixil_frame_0_1__metasprite_4
};

const struct animation_t sprite_pixil_frame_0_1__animations[] = {
    {
        .start = 0,
        .end = 0
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
        .start = 2,
        .end = 2
    },
    {
        .start = 3,
        .end = 4
    },
    {
        .start = 3,
        .end = 4
    },
    {
        .start = 3,
        .end = 4
    },
    {
        .start = 5,
        .end = 6
    }
};

const UWORD sprite_pixil_frame_0_1__animations_lookup[] = {
    SPRITE_11_STATE_DEFAULT
};

const struct spritesheet_t sprite_pixil_frame_0_1_ = {
    .n_metasprites = 7,
    .emote_origin = {
        .x = 0,
        .y = -16
    },
    .metasprites = sprite_pixil_frame_0_1__metasprites,
    .animations = sprite_pixil_frame_0_1__animations,
    .animations_lookup = sprite_pixil_frame_0_1__animations_lookup,
    .bounds = {
        .left = 0,
        .bottom = 7,
        .right = 15,
        .top = -8
    },
    .tileset = TO_FAR_PTR_T(sprite_pixil_frame_0_1__tileset),
    .cgb_tileset = { NULL, NULL }
};
