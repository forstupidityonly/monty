#include "monty.h"
/**
 * add - add the top two nodes
 * @stack: the stack
 * @line_count: line count
 * Return: no
 */
void add(stack_t **stack, unsigned int line_count)
{
	int sum;

	if ((!(*stack)) || (!(*stack)->next))
	{
		dprintf(STDERR_FILENO, "L%u: cant add, stack too short\n", line_count);
		free_stuf();
		exit(EXIT_FAILURE);
	}
	sum = (*stack)->n + (*stack)->next->n;
	pop(stack, line_count);
	(*stack)->n = sum;
}
