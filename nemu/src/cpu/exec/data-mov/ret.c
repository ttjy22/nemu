//
// Created by 浮生未休 on 2020/10/28.
//

#include "cpu/exec/helper.h"
#define DATA_BYTE 1
#include "ret-template.h"
#undef DATA_BYTE

#define DATA_BYTE 2
#include "ret-template.h"
#undef DATA_BYTE

#define DATA_BYTE 4
#include "ret-template.h"
#undef DATA_BYTE

/* for instruction encoding overloading */

make_helper_v(ret_n)
make_helper_v(ret_i)
