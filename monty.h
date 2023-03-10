#ifndef MONTY_H
#define MONTY_H
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
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
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
extern int item;
void push(stack_t **head, unsigned int ln);
void pall(stack_t **stack, unsigned int line_number);
void codexec(char *opcode, stack_t **stack, unsigned int ln);
char *token(char *line, int *errno);
void add(stack_t **head, unsigned int ln);
void swap(stack_t **head, unsigned int ln);
void pop(stack_t **head, unsigned int ln);
void pint(stack_t **head, unsigned int ln);

#endif
