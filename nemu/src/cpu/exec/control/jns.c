//
// Created by 浮生未休 on 2020/10/31.
//

#include "cpu/exec/helper.h"

#define DATA_BYTE 1
#include "jns-template.h"
#undef DATA_BYTE

#define DATA_BYTE 2
#include "jns-template.h"
#undef DATA_BYTE

#define DATA_BYTE 4
#include "jns-template.h"
#undef DATA_BYTE

/* for instruction encoding overloading */

make_helper_v(jns_i)

