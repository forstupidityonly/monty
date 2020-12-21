#include "monty.h"
/**
  * push - add node to list
  * @argument: opcode's argument its an int
  * Return: no
  */
void push(char *argument)
{
    int itr;
    int arg;
    stack_t *new;
    
    if (!argument)
    {
        printf("L%d: usage: push integer1\n", box.line_count);
        exit(EXIT_FAILURE);
    }
    for (itr = 0; argument[itr] != '\0'; itr++)
    {
        if (argument[0] == '-' && itr == 0)
            continue;
        if (!isdigit(argument[itr]))
        {
            printf("L%d: usage: push integer2\n", box.line_count);
            exit(EXIT_FAILURE);
        }
    }
    arg = atoi(argument);
    new = malloc(sizeof(stack_t));
    if (!new)
    {
        printf("Error: malloc failed\n");
        exit(EXIT_FAILURE);
    }
    new->n = arg;
    new->next = box.stack;
    new->prev = NULL;
    if (new->next)
        new->next->prev = new;
    box.stack = new;
}
