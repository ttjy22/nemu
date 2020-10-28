//
// Created by 浮生未休 on 2020/10/28.
//

#include "cpu/exec/helper.h"

#define DATA_BYTE 2
#include "pop-template.h"
#undef DATA_BYTE

#define DATA_BYTE 4
#include "pop-template.h"
#undef DATA_BYTE

/* for instruction encoding overloading */

make_helper_v(pop_rm)
make_helper_v(pop_r)
