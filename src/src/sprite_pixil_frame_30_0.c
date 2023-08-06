#pragma bank 255
// SpriteSheet: pixil-frame-0 (30)

#include "gbs_types.h"
#include "data/sprite_pixil_frame_30_0_tileset.h"

BANKREF(sprite_pixil_frame_30_0)

#define SPRITE_17_STATE_DEFAULT 0
#define SPRITE_17_STATE_OPENED 0
#define SPRITE_17_STATE_SWORD 0
#define SPRITE_17_STATE_PRESSED 0

const metasprite_t sprite_pixil_frame_30_0_metasprite_0[]  = {
    { 0, 17, 0, 3 }, { 0, -8, 2, 3 }, { -16, 0, 4, 3 }, { -16, 0, 6, 3 }, { 32, -8, 8, 3 }, { -16, 0, 10, 3 }, { -16, 0, 12, 3 }, { 32, -8, 14, 3 }, { -16, 0, 16, 3 }, { -16, 0, 18, 3 },
    {metasprite_end}
};

const metasprite_t sprite_pixil_frame_30_0_metasprite_1[]  = {
    { 0, 17, 0, 3 }, { 0, -8, 2, 3 }, { -16, 0, 20, 3 }, { -16, 0, 22, 3 }, { 32, -8, 8, 3 }, { -16, 0, 24, 3 }, { -16, 0, 26, 3 }, { -16, 0, 28, 3 }, { 48, -8, 14, 3 }, { -16, 0, 16, 3 }, { -16, 0, 30, 3 }, { -16, 0, 28, 67 },
    {metasprite_end}
};

const metasprite_t sprite_pixil_frame_30_0_metasprite_2[]  = {
    { 0, 17, 0, 3 }, { 0, -8, 2, 3 }, { -16, 0, 20, 3 }, { -32, 0, 22, 3 }, { 48, -8, 8, 3 }, { -16, 0, 24, 3 }, { -16, 0, 32, 3 }, { -16, 0, 34, 3 }, { 48, -8, 14, 3 }, { -16, 0, 16, 3 }, { -32, 0, 34, 67 },
    {metasprite_end}
};

const metasprite_t sprite_pixil_frame_30_0_metasprite_3[]  = {
    { 0, 17, 0, 3 }, { 0, -8, 2, 3 }, { -16, 0, 20, 3 }, { 16, -8, 8, 3 }, { -16, 0, 24, 3 }, { 16, -8, 14, 3 }, { -16, 0, 16, 3 },
    {metasprite_end}
};

const metasprite_t * const sprite_pixil_frame_30_0_metasprites[] = {
    sprite_pixil_frame_30_0_metasprite_0,
    sprite_pixil_frame_30_0_metasprite_1,
    sprite_pixil_frame_30_0_metasprite_2,
    sprite_pixil_frame_30_0_metasprite_3
};

const struct animation_t sprite_pixil_frame_30_0_animations[] = {
    {
        .start = 0,
        .end = 3
    },
    {
        .start = 0,
        .end = 3
    },
    {
        .start = 0,
        .end = 3
    },
    {
        .start = 0,
        .end = 3
    },
    {
        .start = 0,
        .end = 3
    },
    {
        .start = 0,
        .end = 3
    },
    {
        .start = 0,
        .end = 3
    },
    {
        .start = 0,
        .end = 3
    }
};

const UWORD sprite_pixil_frame_30_0_animations_lookup[] = {
    SPRITE_17_STATE_DEFAULT
};

const struct spritesheet_t sprite_pixil_frame_30_0 = {
    .n_metasprites = 4,
    .emote_origin = {
        .x = 0,
        .y = -56
    },
    .metasprites = sprite_pixil_frame_30_0_metasprites,
    .animations = sprite_pixil_frame_30_0_animations,
    .animations_lookup = sprite_pixil_frame_30_0_animations_lookup,
    .bounds = {
        .left = -16,
        .bottom = 7,
        .right = 31,
        .top = -19
    },
    .tileset = TO_FAR_PTR_T(sprite_pixil_frame_30_0_tileset),
    .cgb_tileset = { NULL, NULL }
};
