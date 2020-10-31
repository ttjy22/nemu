//
// Created by 浮生未休 on 2020/10/30.
//

#include "cpu/exec/template-start.h"

#define instr movs

static void do_execute () {

    swaddr_write (reg_l(R_EDI),4,swaddr_read (reg_l(R_ESI),4));
    if (cpu.DF == 0)
    {
        reg_l (R_EDI) += DATA_BYTE;
        reg_l (R_ESI) += DATA_BYTE;
    }
    else
    {
        reg_l (R_EDI) -= DATA_BYTE;
        reg_l (R_ESI) -= DATA_BYTE;
    }

    print_asm("movs");
}

make_instr_helper(n)

#include "cpu/exec/template-end.h"
