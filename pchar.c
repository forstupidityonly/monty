#include "monty.h"
/**
 * pchar - prints the top node as a char
 * @stack: the stack
 * @line_count: line count
 * Return: no
 */
void pchar(stack_t **stack, unsigned int line_count)
{
	if (!(*stack))
	{
		dprintf(STDERR_FILENO, "L%u: can't pchar, stack empty\n", line_count);
		free_stuf();
		exit(EXIT_FAILURE);
	}
	if (!isascii((*stack)->n))
	{
		dprintf(STDERR_FILENO, "L%u: can't pchar, value out of range\n", line_count);
		free_stuf();
		exit(EXIT_FAILURE);
	}
	printf("%c\n", (*stack)->n);
}
