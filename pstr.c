#include "monty.h"
/**
 * pstr - prints out the whole stack as char if pos
 * @stack: the stack
 * @line_count: line count
 * Return: no
 */
void pstr(stack_t **stack, __attribute__((unused))unsigned int line_count)
{
	int pstr;
	stack_t *temp;

	temp = *stack;
	while (temp)
	{
		pstr = temp->n;
		if (pstr > 0 && pstr < 128)
		{
			temp = temp->next;
			printf("%c", pstr);
		}
		else
			break;
	}
	printf("\n");
}
