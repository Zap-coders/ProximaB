#pragma bank 255
// SpriteSheet: pixil-frame-0 (28) copy

#include "gbs_types.h"
#include "data/sprite_pixil_frame_0_28_cop_tileset.h"

BANKREF(sprite_pixil_frame_0_28_cop)

#define SPRITE_4_STATE_DEFAULT 0
#define SPRITE_4_STATE_OPENED 0
#define SPRITE_4_STATE_SWORD 0
#define SPRITE_4_STATE_PRESSED 0

const metasprite_t sprite_pixil_frame_0_28_cop_metasprite_0[]  = {
    { 3, 23, 0, 4 }, { -16, 0, 2, 4 }, { 16, -8, 4, 4 }, { -16, 0, 6, 4 },
    {metasprite_end}
};

const metasprite_t * const sprite_pixil_frame_0_28_cop_metasprites[] = {
    sprite_pixil_frame_0_28_cop_metasprite_0
};

const struct animation_t sprite_pixil_frame_0_28_cop_animations[] = {
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

const UWORD sprite_pixil_frame_0_28_cop_animations_lookup[] = {
    SPRITE_4_STATE_DEFAULT
};

const struct spritesheet_t sprite_pixil_frame_0_28_cop = {
    .n_metasprites = 1,
    .emote_origin = {
        .x = 0,
        .y = -32
    },
    .metasprites = sprite_pixil_frame_0_28_cop_metasprites,
    .animations = sprite_pixil_frame_0_28_cop_animations,
    .animations_lookup = sprite_pixil_frame_0_28_cop_animations_lookup,
    .bounds = {
        .left = 0,
        .bottom = 7,
        .right = 15,
        .top = -8
    },
    .tileset = TO_FAR_PTR_T(sprite_pixil_frame_0_28_cop_tileset),
    .cgb_tileset = { NULL, NULL }
};
