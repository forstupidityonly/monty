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
	size_t length;
	ssize_t buffer;
	char *opcode;

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
	length = 0;
	while ((buffer = getline(&box.current_line, &length, box.file)) != -1)
	{
		box.line_count++;

		opcode = strtok(box.current_line, " \t\n");
		if (!opcode || opcode[0] == '#')
			continue;

		if (strcmp(opcode, "push") == 0)
			push(strtok(NULL, " \t\n"));
		else
			get_func(opcode);
	}
	free_stuf();
	return (EXIT_SUCCESS);
}
