#include "cpu/exec/template-start.h"

#define instr shr

static void do_execute () {
	DATA_TYPE src = op_src->val;
	DATA_TYPE dest = op_dest->val;

	uint8_t count = src & 0x1f;
	dest >>= count;
	OPERAND_W(op_dest, dest);

	/* TODO: Update EFLAGS. */
//	panic("please implement me");
    int len = (DATA_BYTE << 3) - 1;
    cpu.CF = (dest < op_dest->val);
    cpu.SF=dest >> len;
    int s1,s2;
    s1=op_dest->val>>len;
    s2=op_src->val>>len;
    cpu.OF=(s1 != s2 && s2 == cpu.SF) ;
    cpu.ZF=!dest;
    OPERAND_W(op_dest, dest);
    dest ^= dest >>4;
    dest ^= dest >>2;
    dest ^= dest >>1;
    cpu.PF=!(dest & 1);
	print_asm_template2();
}

make_instr_helper(rm_1)
make_instr_helper(rm_cl)
make_instr_helper(rm_imm)

#include "cpu/exec/template-end.h"
