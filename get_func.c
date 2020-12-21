#include "monty.h"
/**
  * get_func - calls the opcode func
  * @stack: the stack
  * @opcode: the opcode
  * Return: always 1
  */
int get_func(stack_t **stack, char *opcode)
{
	int itr = 0;
	char *cmd;

		instruction_t opt[] = {
		{"pall", pall},
		{"pint", pint},
		{"nop", nop},
		{NULL, NULL}
	};

	cmd = strtok(opcode, "\n");
	while (opt[itr].opcode != NULL)
	{
		if (strcmp(cmd, opt[itr].opcode) == 0)
		{
			(opt[itr].f)(stack, box.line_count);
			return (1);
		}
		itr++;
	}
	fprintf(stderr, "L%d: unknown instruction %s\n", box.line_count, opcode);
	exit(EXIT_FAILURE);
}
