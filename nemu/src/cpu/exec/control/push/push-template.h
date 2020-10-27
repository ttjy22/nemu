//
// Created by 浮生未休 on 2020/10/27.
//

#include "cpu/exec/template-start.h"

#define instr push

static void do_execute () {
    if (DATA_BYTE == 1)op_src->val = (int8_t)op_src->val;
    reg_l (R_ESP) -= 4;
    swaddr_write (reg_l (R_ESP) , 4 , op_src->val);
//    print_asm("call %x",cpu.eip + 1 + op_src->val);
}

make_instr_helper(i)
#if DATA_BYTE == 2 || DATA_BYTE == 4
make_instr_helper(r)
make_instr_helper(rm)
#endif

#include "cpu/exec/template-end.h"

