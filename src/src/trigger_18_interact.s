.module trigger_18_interact

.include "vm.i"
.include "data/game_globals.i"

.area _CODE_255

.LOCAL_ACTOR = -4

___bank_trigger_18_interact = 255
.globl ___bank_trigger_18_interact

_trigger_18_interact::
        VM_LOCK

        VM_RESERVE              4

        ; If Variable .EQ Value
        VM_IF_CONST             .EQ, VAR_8L1_MINI_BOSS, 0, 1$, 0
        ; Variable Set To False
        VM_SET_CONST            VAR_S16T2_LOCAL_0, 0

        VM_JUMP                 2$
1$:
        ; Variable Set To True
        VM_SET_CONST            VAR_S16T2_LOCAL_0, 1

2$:

        ; If Variable .EQ Value
        VM_IF_CONST             .EQ, VAR_S16T2_LOCAL_0, 1, 3$, 0
        VM_JUMP                 4$
3$:
        ; Music Play
        VM_MUSIC_PLAY           ___bank_song_song_template_1_Data, _song_song_template_1_Data, .MUSIC_NO_LOOP

        ; Actor Set Active
        VM_SET_CONST            .LOCAL_ACTOR, 0

        ; Actor Move Relative
        VM_ACTOR_GET_POS        .LOCAL_ACTOR
        VM_RPN
            .R_REF      ^/(.LOCAL_ACTOR + 1)/
            .R_INT16    0
            .R_OPERATOR .ADD
            .R_INT16    0
            .R_OPERATOR .MAX
            .R_REF      ^/(.LOCAL_ACTOR + 2)/
            .R_INT16    -256
            .R_OPERATOR .ADD
            .R_INT16    0
            .R_OPERATOR .MAX
            .R_STOP
        VM_SET                  ^/(.LOCAL_ACTOR + 1 - 2)/, .ARG1
        VM_SET                  ^/(.LOCAL_ACTOR + 2 - 2)/, .ARG0
        VM_POP                  2
        VM_SET_CONST            ^/(.LOCAL_ACTOR + 3)/, .ACTOR_ATTR_CHECK_COLL
        VM_ACTOR_MOVE_TO        .LOCAL_ACTOR

4$:

        ; Stop Script
        VM_STOP
