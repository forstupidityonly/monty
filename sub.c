#include "monty.h"
/**
 * sub - add the top two nodes
 * @stack: the stack
 * @line_count: line count
 * Return: no
 */
void sub(stack_t **stack, unsigned int line_count)
{
	int sub;

	if ((!(*stack)) || (!(*stack)->next))
	{
		dprintf(STDERR_FILENO, "L%u: can't add, stack too short\n", line_count);
		free_stuf();
		exit(EXIT_FAILURE);
	}
	sub =  (*stack)->next->n - (*stack)->n;
	pop(stack, line_count);
	(*stack)->n = sub;
}
