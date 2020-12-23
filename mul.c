#include "monty.h"
/**
 * mul - mul the first two
 * @stack: the stack
 * @line_count: line count
 * Return: no
 */
void mul(stack_t **stack, unsigned int line_count)
{
	int mul;

	if ((!(*stack)) || (!(*stack)->next))
	{
		dprintf(STDERR_FILENO, "L%u: can't add, stack too short\n", line_count);
		free_stuf();
		exit(EXIT_FAILURE);
	}
	mul = (*stack)->n * (*stack)->next->n;
	pop(stack, line_count);
	(*stack)->n = mul;
}
