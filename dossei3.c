#include "monty.h"

/**
 * wazi1 - fun01
 * @hozma: vp1
 * @sa: vp2
 */
void wazi1(stack_t **hozma, __attribute__((unused))unsigned int sa)
{
	stack_t *mo;

	if (hozma == NULL || *hozma == NULL || (*hozma)->next == NULL)
		return;

	mo = *hozma;
	while (mo->next != NULL)
		mo = mo->next;

	mo->next = *hozma;
	(*hozma)->prev = mo;
	*hozma = (*hozma)->next;
	(*hozma)->prev->next = NULL;
	(*hozma)->prev = NULL;
}

/**
 * wazi2 - fun02
 * @hozma: vp1
 * @saff: vp2
 */
void wazi2(stack_t **hozma, unsigned int saff)
{
	int g3;

	if (hozma == NULL || *hozma == NULL || (*hozma)->next == NULL)
		ror(8, saff, "mul");

	(*hozma) = (*hozma)->next;
	g3 = (*hozma)->n * (*hozma)->prev->n;
	(*hozma)->n = g3;
	free((*hozma)->prev);
	(*hozma)->prev = NULL;
}
/**
 * wazi3 - fun03
 * @hozma: vp1
 * @sa: vp2
 */
void wazi3(stack_t **hozma, __attribute__((unused))unsigned int sa)
{
	stack_t *mo;

	if (hozma == NULL || *hozma == NULL || (*hozma)->next == NULL)
		return;

	mo = *hozma;

	while (mo->next != NULL)
		mo = mo->next;

	mo->next = *hozma;
	mo->prev->next = NULL;
	mo->prev = NULL;
	(*hozma)->prev = mo;
	(*hozma) = mo;
}

/**
 * wazi4 - fun04
 * @hozma: vp1
 * @saff: vp2
 */
void wazi4(stack_t **hozma, unsigned int saff)
{
	int g3;

	if (hozma == NULL || *hozma == NULL || (*hozma)->next == NULL)

		ror(8, saff, "mod");


	if ((*hozma)->n == 0)
		ror(9, saff);
	(*hozma) = (*hozma)->next;
	g3 = (*hozma)->n % (*hozma)->prev->n;
	(*hozma)->n = g3;
	free((*hozma)->prev);
	(*hozma)->prev = NULL;
}
/**
 * wazi5 - fun05
 * @hozma: vp1
 * @saff: vp2
 */
void wazi5(stack_t **hozma, unsigned int saff)
{
	int g3;

	if (hozma == NULL || *hozma == NULL || (*hozma)->next == NULL)

		ror(8, saff, "sub");


	(*hozma) = (*hozma)->next;
	g3 = (*hozma)->n - (*hozma)->prev->n;
	(*hozma)->n = g3;
	free((*hozma)->prev);
	(*hozma)->prev = NULL;
}
