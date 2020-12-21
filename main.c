#include "monty.h"
storage_t box;
/**
  *
  */
int main(int ac, char **av)
{

    set_storage_null();
    size_t length = 0;
    ssize_t buffer;
    char *opcode;
    char *argument;

    if (ac != 2)
    {
        printf("USAGE: monty file\n");
        exit(EXIT_FAILURE);
    }
    box.file = fopen(av[1], "r");
    if (box.file == NULL)
    {
        printf("Error: Can't open file %s\n", av[1]);
        exit(EXIT_FAILURE);
    }
    while ((buffer = getline(&box.current_line, &length, box.file)) != -1)
    {
        opcode = strtok(box.current_line, " ");
        if (*opcode == '\n' || *opcode == '#')
        {
            box.line_count++;
            continue;
        }
        else if (strcmp(opcode, "push") == 0)
        {
            argument = strtok(NULL, "  \n");
            push(argument);
        }
        else
            get_func(&box.stack, opcode);
        box.line_count++;
    }

        /**free things**/
        return (EXIT_SUCCESS);
}