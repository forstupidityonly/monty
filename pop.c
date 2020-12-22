#include "monty.h"
/**
 * pop - pop the top node from the stack
 * @stack: the stack
 * @line_count: the line count
 * Return: no
 */
void pop(stack_t **stack, unsigned int line_count)
{
	stack_t *temp;

	if (!(*stack))
	{
		dprintf(STDERR_FILENO, "l%u: can't pop an enpty stack\n", line_count);
		free_stuf();
		exit(EXIT_FAILURE);
	}
	temp = *stack;

	*stack = (*stack)->next;
	free(temp);
	if (*stack)
		(*stack)->prev = NULL;
}
