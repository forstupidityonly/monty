#include "monty.h"
/**
  * pall - print all list links
  * @stack: the list
  * @line_count: uhmmmm
  * Return: on failure
  */
void pall(stack_t **stack, __attribute__((unused)) unsigned int line_count)
{
	stack_t *selector = *stack;

	if (*stack == NULL)
		return;
	for (; selector; selector = selector->next)
		fprintf(stderr, "%d\n", selector->n);
}
