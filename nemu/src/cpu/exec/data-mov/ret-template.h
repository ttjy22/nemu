//
// Created by 浮生未休 on 2020/10/28.
//

#include "cpu/exec/template-start.h"

#define instr ret

make_helper(concat(ret_n_, SUFFIX))
{
//    current_sreg = R_SS;
    cpu.eip = MEM_R (reg_l (R_ESP)) -1;
    reg_l (R_ESP) += DATA_BYTE;
    print_asm("ret");
    return 1;
}

make_helper(concat(ret_i_, SUFFIX))
{
    int val = instr_fetch(eip + 1, 2);
    int i;
//    current_sreg = R_SS;
    cpu.eip = swaddr_read(cpu.esp,4)-3 ;
    REG (R_ESP) += DATA_BYTE;
    for (i = 0;i < val; i+=DATA_BYTE)
        MEM_W (REG (R_ESP) + i,0);
    REG (R_ESP) += val;
    print_asm("ret $0x%x",val);
    return 3;
}

#include "cpu/exec/template-end.h"

