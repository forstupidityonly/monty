#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>
#include <errno.h>
#include <ctype.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
		int n;
		struct stack_s *prev;
		struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
/**
  * struct storage_s - global struct to hold things and clean up my code
  * @file: the file with monty code to be "translated"
  * @current_line: the current line
  * @stack: the stack to build
  * @line_count: current line num
  */
typedef struct storage_s
{
	FILE *file;
	char *current_line;
	stack_t *stack;
	unsigned int line_count;
} storage_t;

extern storage_t box;

void f_stack(stack_t *stack);
void set_storage_null(void);
void get_func(char *opcode);
void pall(stack_t **stack, unsigned int line_count);
void pint(stack_t **stack, unsigned int line_count);
void nop(stack_t **stack, unsigned int line_count);
void pop(stack_t **stack, unsigned int line_count);
void swap(stack_t **stack, unsigned int line_count);
void add(stack_t **stack, unsigned int line_count);
void sub(stack_t **stack, unsigned int line_count);
void div_func(stack_t **stack, unsigned int line_count);
void push(char *argument);
void free_stuf(void);
#endif
