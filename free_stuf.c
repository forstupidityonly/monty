#include "monty.h"
/**
 * free_stuf - free_shit
 * Return: void
 */
void free_stuf(void)
{
    stack_t *tmp;

    while (box.stack)
    {
        tmp = box.stack->next;
        free(box.stack);
        box.stack = tmp;
    }
    free(box.current_line);
    fclose(box.file);
}