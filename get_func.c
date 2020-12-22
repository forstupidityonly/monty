#include "monty.h"
/**
  * get_func - calls the opcode func
  * @stack: the stack
  * @opcode: the opcode
  * Return: no
  */
void get_func(char *opcode)
{
	int itr;

	instruction_t opt[] = {
		{"pall", pall},
		{"pint", pint},
		{"nop", nop},
		{NULL, NULL}
	};
	for (itr = 0; opt[itr].opcode; ++itr)
	{
		if (strcmp(opt[itr].opcode, opcode) == 0)
		{
			opt[itr].f(&box.stack, box.line_count);
			return;
		}
	}
	dprintf(STDERR_FILENO, "L%d: unknown instruction %s\n", box.line_count, opcode);
	/*free shit*/
	exit(EXIT_FAILURE);
}
