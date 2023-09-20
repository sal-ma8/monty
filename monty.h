#ifndef MONTY_H
#define MONTY_H

#define _GNU_SOURCE

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdarg.h>
#include <string.h>

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

extern stack_t *head;
typedef void (*op_func)(stack_t **, unsigned int);


/*dossei1*/

void insutsu1(stack_t **hozma, unsigned int saff);
/*void print_stack(stack_t **, unsigned int);*/

void insutsu2(stack_t **hozma, unsigned int saff);
/*void print_top(stack_t **stack, unsigned int line_number)*/

void insutsu3(stack_t **hozma, unsigned int saff);
/*void print_char(stack_t **stack, unsigned int line_number)*/

void insutsu4(stack_t **hozma, __attribute__((unused))unsigned int sa);
/*void print_str(stack_t **stack, __attribute__((unused))unsigned int ln)*/



/*dossei2*/
 
void wazifa1(stack_t **gded, __attribute__((unused))unsigned int sa);
/*void add_to_stack(stack_t **new_node, __attribute__((unused))unsigned int ln)*/

void wazifa2(stack_t **hozma, unsigned int saff);
/*void nop(stack_t **stack, unsigned int line_number)*/


#endif
