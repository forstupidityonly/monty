#include "monty.h"
/**
  * pint - does stuff
  * Return: no
  */
void pint(stack_t **stack, unsigned int line_count)
{
	if (!*stack)
	{
		dprintf(STDERR_FILENO, "L%u: cont pint, stack empty\n", line_count);
		free_stuf();
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
