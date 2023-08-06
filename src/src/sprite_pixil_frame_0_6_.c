#pragma bank 255
// SpriteSheet: sword

#include "gbs_types.h"
#include "data/sprite_pixil_frame_0_7__tileset.h"

BANKREF(sprite_pixil_frame_0_6_)

#define SPRITE_1_STATE_DEFAULT 0
#define SPRITE_1_STATE_OPENED 0
#define SPRITE_1_STATE_SWORD 0
#define SPRITE_1_STATE_PRESSED 0

const metasprite_t sprite_pixil_frame_0_6__metasprite_0[]  = {
    {metasprite_end}
};

const metasprite_t * const sprite_pixil_frame_0_6__metasprites[] = {
    sprite_pixil_frame_0_6__metasprite_0
};

const struct animation_t sprite_pixil_frame_0_6__animations[] = {
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
    }
};

const UWORD sprite_pixil_frame_0_6__animations_lookup[] = {
    SPRITE_1_STATE_DEFAULT
};

const struct spritesheet_t sprite_pixil_frame_0_6_ = {
    .n_metasprites = 1,
    .emote_origin = {
        .x = 0,
        .y = -16
    },
    .metasprites = sprite_pixil_frame_0_6__metasprites,
    .animations = sprite_pixil_frame_0_6__animations,
    .animations_lookup = sprite_pixil_frame_0_6__animations_lookup,
    .bounds = {
        .left = 0,
        .bottom = 7,
        .right = 15,
        .top = -8
    },
    .tileset = TO_FAR_PTR_T(sprite_pixil_frame_0_7__tileset),
    .cgb_tileset = { NULL, NULL }
};
