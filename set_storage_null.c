#include "monty.h"
storage_t box;
/**
  * set_storage_null - does that
  * Return: no
  */
void set_storage_null(void)
{
	box.file = NULL;
	box.current_line = NULL;
	box.stack = NULL;
	box.line_count = 1;
}
