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
	if (hozma == NULL || *hozma == NULL)
		more_err(6, saff);
	printf("%d\n", (*hozma)->n);
}

/**
 * insutsu3 - fun03
 * @hozma: vp1
 * @saff: vp2
 */
void insutsu3(stack_t **hozma, unsigned int saff)
{
	int ha;

	if (hozma == NULL || *hozma == NULL)
		string_err(11, saff);

	ha = (*hozma)->n;
	if (ha < 0 || ha > 127)
		string_err(10, saff);
	printf("%c\n", ha);
}

/**
 * insutsu4 - fun04
 * @hozma: vp1
 * @sa: vp2
 */
void insutsu4(stack_t **hozma, __attribute__((unused))unsigned int sa)
{
	int ha;
	stack_t *mo;

	if (hozma == NULL || *hozma == NULL)
	{
		printf("\n");
		return;
	}

	mo = *hozma;
	while (mo != NULL)
	{
		ha = mo->n;
		if (ha <= 0 || ha > 127)
			break;
		printf("%c", ha);
		mo = mo->next;
	}
	printf("\n");
}
