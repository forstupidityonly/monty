#include "monty.h"
/**
 * div - div the top two nodes
 * @stack: the stack
 * @line_count: line count
 * Return: no
 */
void div_func(stack_t **stack, unsigned int line_count)
{
	int div;

	if ((!(*stack)) || (!(*stack)->next))
	{
		dprintf(STDERR_FILENO, "L%u: cant add, stack too short\n", line_count);
		free_stuf();
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n == 0)
	{
		dprintf(STDERR_FILENO, "L%u: division by zero\n", 1);
		free_stuf();
		exit(EXIT_FAILURE);
	}

	div = (*stack)->next->n / (*stack)->n;
	pop(stack, line_count);
	(*stack)->n = div;
}
