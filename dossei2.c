#include "monty.h"

/**
 * wazifa1 - fun01
 * @gded: vp1
 * @sa: vp2
 */
void wazifa1(stack_t **gded, __attribute__((unused))unsigned int sa)
{
	stack_t *mo;

	if (gded == NULL || *gded == NULL)
		exit(EXIT_FAILURE);
	if (head == NULL)
	{
		head = *gded;
		return;
	}
	mo = head;
	head = *gded;
	head->next = mo;
	mo->prev = head;
}

/**
 * wazifa2 - fun02
 * @hozma: vp1
 * @saff: vp2
 */
void wazifa2(stack_t **hozma, unsigned int saff)
{
	(void)hozma;
	(void)saff;
}

/**
 * wazifa3 - fun03
 * @hozma: vp1
 * @saff: vp2
 */
void wazifa3(stack_t **hozma, unsigned int saff)
{
	int g3;

	if (hozma == NULL || *hozma == NULL || (*hozma)->next == NULL)
		ror(8, saff, "add");

	(*hozma) = (*hozma)->next;
	g3 = (*hozma)->n + (*hozma)->prev->n;
	(*hozma)->n = g3;
	free((*hozma)->prev);
	(*hozma)->prev = NULL;
}

/**
 * wazifa4 - fun04
 * @hozma: vp1
 * @saff: vp2
 */
void wazifa4(stack_t **hozma, unsigned int saff)
{
	stack_t *mo;

	if (hozma == NULL || *hozma == NULL)
		ror(7, saff);

	mo = *hozma;
	*hozma = mo->next;
	if (*hozma != NULL)
		(*hozma)->prev = NULL;
	free(mo);
}

/**
 * wazifa5 - fun05
 * @hozma: vp1
 * @saff: vp2
 */
void wazifa5(stack_t **hozma, unsigned int saff)
{
	stack_t *mo;

	if (hozma == NULL || *hozma == NULL || (*hozma)->next == NULL)
		ror(8, saff, "swap");
	mo = (*hozma)->next;
	(*hozma)->next = mo->next;
	if (mo->next != NULL)
		mo->next->prev = *hozma;
	mo->next = *hozma;
	(*hozma)->prev = mo;
	mo->prev = NULL;
	*hozma = mo;
}
