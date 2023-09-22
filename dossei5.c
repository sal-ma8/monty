#include "monty.h"

/**
 * fno - ff
 */
void fno(void)
{
        stack_t *mo;

        if (head == NULL)
                return;

        while (head != NULL)
        {
                mo = head;
                head = head->next;
                free(mo);
        }
}

/**
 * emf - fff
 * @v: vp1
 */

void emf(FILE *v)
{
        int r5, ma = 0;
        char *buff = NULL;
        size_t ha = 0;

        for (r5 = 1; getline(&buff, &ha, v) != -1; r5++)
        {
                ma = parse_line(buff, r5, ma);
        }
        free(buff);
}

/**
 * ooff - fff
 * @v: vp1
 */

void ooff(char *v)
{
        FILE *sa = fopen(v, "r");

        if (v == NULL || sa == NULL)
                ror(2, v);

        emf(sa);
        fclose(sa);
}
