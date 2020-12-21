#include "monty.h"
/**
  *
  */
void set_storage_null(void)
{
    box.file = NULL;
    box.current_line = NULL;
    box.stack = NULL;
    box.line_count = 1;
}
