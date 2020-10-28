#include "cpu/exec/helper.h"

make_helper(call)
{

	int len = decode_si_l(eip+1);
	swaddr_t ret_addr = cpu.eip + len + 1;
	swaddr_write(cpu.esp - 4 , 4 , ret_addr);
	cpu.esp = cpu.esp - 4;
	cpu.eip = op_src->val;
	return len + 1;


}
