#include "monty.h"

/**
 * ror - fun01
 * @v: vp1
 */
void ror(int v, ...)
{
	va_list ha;
	char *am;
	int rakm;

	va_start(ha, v);
	switch (v)
	{
		case 6:
			fprintf(stderr, "L%d: can't pint, stack empty\n",
				va_arg(ha, int));
			break;
		case 7:
			fprintf(stderr, "L%d: can't pop an empty stack\n",
				va_arg(ha, int));
			break;
		case 8:
			rakm = va_arg(ha, unsigned int);
			am = va_arg(ha, char *);
			fprintf(stderr, "L%d: can't %s, stack too short\n", rakm, am);
			break;
		case 9:
			fprintf(stderr, "L%d: division by zero\n",
				va_arg(ha, unsigned int));
			break;
		default:
			break;
	}
	fno();
	exit(EXIT_FAILURE);
}

/**
 * sror - fun02
 * @v: vp1
 */
void sror(int v, ...)
{
	va_list ha;
	int rk;

	va_start(ha, v);
	rk = va_arg(ha, int);
	switch (v)
	{
		case 10:
			fprintf(stderr, "L%d: can't pchar, value out of range\n", rk);
			break;
		case 11:
			fprintf(stderr, "L%d: can't pchar, stack empty\n", rk);
			break;
		default:
			break;
	}
	fno();
	exit(EXIT_FAILURE);
}

/**
 * mror -bvbn
 * @ramz: vp1
 */
void mror(int ramz, ...)
{
	va_list ha;
	char *nl;
	int sa;

	va_start(ha, ramz);
	switch (ramz)
	{
		case 6:
			fprintf(stderr, "L%d: can't pint, stack empty\n",
				va_arg(ha, int));
			break;
		case 7:
			fprintf(stderr, "L%d: can't pop an empty stack\n",
				va_arg(ha, int));
			break;
		case 8:
			sa = va_arg(ha, unsigned int);
			nl = va_arg(ha, char *);
			fprintf(stderr, "L%d: can't %s, stack too short\n", sa, nl);
			break;
		case 9:
			fprintf(stderr, "L%d: division by zero\n",
				va_arg(ha, unsigned int));
			break;
		default:
			break;
	}
	fno();
	exit(EXIT_FAILURE);
}


/**
 * tfo - zxcvb
 * @hozma: vp1
 * @saff: vp2
 */
void tfo(stack_t **hozma, unsigned int saff)
{
	int gm;

	if (hozma == NULL || *hozma == NULL || (*hozma)->next == NULL)
		mror(8, saff, "div");

	if ((*hozma)->n == 0)
		mror(9,saff);
	(*hozma) = (*hozma)->next;
	gm = (*hozma)->n / (*hozma)->prev->n;
	(*hozma)->n = gm;
	free((*hozma)->prev);
	(*hozma)->prev = NULL;
}
/**
 * kol - bvc
 * @ft: vp
 * @nl: vp
 * @car: vp
 * @ne: vpc
 * @men: vp
 */
void kol(op_func ft, char *nl, char *car, int ne, int men)
{
	stack_t *doo;
	int sa;
	int ha;

	sa = 1;
	if (strcmp(nl, "push") == 0)
	{
		if (car != NULL && car[0] == '-')
		{
			car = car + 1;
			sa = -1;
		}
		if (car == NULL)
			ror(5, ne);
		for (ha = 0; car[ha] != '\0'; ha++)
		{
			if (isdigit(car[ha]) == 0)
				ror(5, ne);
		}
		doo = gnn(atoi(car) * sa);
		if (men == 0)
			ft(&doo, ne);
		if (men == 1)
			d(&doo, ne);
	}
	else
		ft(&head, ne);
}
