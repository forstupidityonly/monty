#include "monty.h"
/**
 * mod - mod the first two nodes
 * @stack: stack
 * @line_count: count
 * Return: no
 */
void mod(stack_t **stack, unsigned int line_count)
{
	int mod;

	if ((!(*stack)) || (!(*stack)->next))
	{
		dprintf(STDERR_FILENO, "L%u: can't mod, stack too short\n", line_count);
		free_stuf();
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n == 0)
	{
		printf("L%d: division by zero\n", line_count);
		free_stuf();
		exit(EXIT_FAILURE);
	}
	mod = (*stack)->next->n % (*stack)->n;
	pop(stack, line_count);
	(*stack)->n = mod;
}
