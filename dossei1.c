#include "monty.h"

/**
 * insutsu1 - fun01
 * @hozma: vp1
 * @saff: vp2
 */
void insutsu1(stack_t **hozma, unsigned int saff)
{
	stack_t *ha;

	(void) saff;
	if (hozma == NULL)
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
		ror(6, saff);
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
		sror(11, saff);

	ha = (*hozma)->n;
	if (ha < 0 || ha > 127)
		sror(10, saff);
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
/**
 * insutsu5 - fun05
 * @hozma: vp1
 * @saff: vp2
 */
void insutsu5(stack_t **hozma, unsigned int saff)
{
	int g3;

	if (hozma == NULL || *hozma == NULL || (*hozma)->next == NULL)
		ror(8, saff, "div");

	if ((*hozma)->n == 0)
		ror(9, saff);
	(*hozma) = (*hozma)->next;
	g3 = (*hozma)->n / (*hozma)->prev->n;
	(*hozma)->n = g3;
	free((*hozma)->prev);
	(*hozma)->prev = NULL;
}
