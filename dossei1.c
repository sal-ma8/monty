#include "monty.h"

/**
 * insutsu1 - fun01
 * @hozma: vp1
 * @saff: vp2
 */
void insutsu1(stack_t **hozma, unsigned int saff)
{
	stack_t *ha;

	(void) line_number;
	if (stack == NULL)
		exit(EXIT_FAILURE);
	ha = *hozma;
	while (ha != NULL)
	{
		printf("%d\n", ha->n);
		ha = ha->next;
	}
}

/**
 * insutsu2 - fun02
 * @hozma: vp1
 * @saff: vp2
 */
void insutsu2(stack_t **hozma, unsigned int saff)
{
	if (stack == NULL || *stack == NULL)
		more_err(6, line_number);
	printf("%d\n", (*stack)->n);
}

/**
 * print_char - Prints the Ascii value.
 * @stack: Pointer to a pointer pointing to top node of the stack.
 * @line_number: Interger representing the line number of of the opcode.
 */
void print_char(stack_t **stack, unsigned int line_number)
{
	int ascii;

	if (stack == NULL || *stack == NULL)
		string_err(11, line_number);

	ascii = (*stack)->n;
	if (ascii < 0 || ascii > 127)
		string_err(10, line_number);
	printf("%c\n", ascii);
}

/**
 * print_str - Prints a string.
 * @stack: Pointer to a pointer pointing to top node of the stack.
 * @ln: Interger representing the line number of of the opcode.
 */
void print_str(stack_t **stack, __attribute__((unused))unsigned int ln)
{
	int ascii;
	stack_t *tmp;

	if (stack == NULL || *stack == NULL)
	{
		printf("\n");
		return;
	}

	tmp = *stack;
	while (tmp != NULL)
	{
		ascii = tmp->n;
		if (ascii <= 0 || ascii > 127)
			break;
		printf("%c", ascii);
		tmp = tmp->next;
	}
	printf("\n");
}

