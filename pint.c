#include "monty.h"
/**
  * pint - print vat at top of stack
  * @stack: the working stack
  * @line_count: the line count
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
