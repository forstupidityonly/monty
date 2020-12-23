#include "monty.h"
/**
 * swap - swap top two nodes
 * @stack: stack
 * @line_count: line count
 * Return: no
 */
void swap(stack_t **stack, unsigned int line_count)
{
	stack_t *temp;

	if (!stack || !(*stack)->next)
	{
		dprintf(STDERR_FILENO, "L%u: can't swap, stack too short\n",
		line_count);
		free_stuf();
		exit(EXIT_FAILURE);
	}
	else
	{
		temp = (*stack)->next;
		(*stack)->next = temp->next;
		temp->next = (*stack);
		(*stack)->prev = temp;
		temp->prev = NULL;
		*stack = temp;
	}
}
