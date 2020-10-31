//
// Created by 浮生未休 on 2020/10/31.
//

#include "cpu/exec/template-start.h"

#define instr stos

static void do_execute () {
    swaddr_write (reg_l(R_EDI),4,reg_l(R_EAX));
    if (cpu.DF == 0)reg_l (R_EDI) += DATA_BYTE;
    else reg_l (R_EDI) -= DATA_BYTE;
    print_asm("stos");
}

make_instr_helper(n)


#include "cpu/exec/template-end.h"
