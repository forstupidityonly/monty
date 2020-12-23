#include "monty.h"
/**
 * rotr - rotates the stack to the bottom
 * @stack: the stack
 * @line_count: line count
 * Return: no
 */
void rotr(stack_t **stack, __attribute__((unused))unsigned int line_count)
{
	stack_t *last_node, *next_node;

/*if stack0 or stack1 is null then shit will break*/
	if (!(*stack) || !(*stack)->next)
		return;

	last_node = *stack;
	while (last_node->next->next)
		last_node = last_node->next;
	next_node = last_node->next;
	last_node->next = NULL;
	(*stack)->prev = next_node;
	next_node->next = *stack;
	next_node->prev = NULL;
	*stack = next_node;
}
