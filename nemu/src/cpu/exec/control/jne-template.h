//
// Created by 浮生未休 on 2020/10/29.
//

#include "cpu/exec/template-start.h"

#define instr jne


static void do_execute() {
    DATA_TYPE_S displacement = op_src->val;
    print_asm("jne %x",cpu.eip + 1 + DATA_BYTE + displacement);
    if (cpu.ZF == 0)cpu.eip +=displacement;
}
make_instr_helper(i)


#include "cpu/exec/template-end.h"
