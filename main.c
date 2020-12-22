#include "monty.h"

/**
  * main - program entry point
  * @ac: arg count
  * @av: the array
  * Return: int cuz its main
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
		dprintf(STDERR_FILENO, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	box.file = fopen(av[1], "r");
	if (box.file == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", av[1]);
		exit(EXIT_FAILURE);
	}
	while ((buffer = getline(&box.current_line, &length, box.file)) != -1)
	{
		opcode = strtok(box.current_line, " \t\n");
		if (!opcode || opcode[0] == '#')
		{
			box.line_count++;
			continue;
		}
		else if (strcmp(opcode, "push") == 0)
		{
			argument = strtok(NULL, "  \t\n");
			push(argument);
		}
		else
			get_func(opcode);
		box.line_count++;
	}
	free_stuf();
	return (EXIT_SUCCESS);
}
