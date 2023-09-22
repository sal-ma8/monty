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
	free_nodes();
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
	free_nodes();
	exit(EXIT_FAILURE);
}
