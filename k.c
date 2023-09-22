#include "monty.h"
stack_t *head = NULL;
/**
 * main - fff
 * @argc: vp1
 * @argv[]: vp2
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	ooff(argv[1]);
	fno();
	return (0);
}

/**
 * d - fun5
 * @gn: vp2
 * @sa: vp1
 */
void d(stack_t **gn, __attribute__((unused))unsigned int sa)
{
        stack_t *mo;

        if (gn == NULL || *gn == NULL)
                exit(EXIT_FAILURE);
        if (head == NULL)
        {
                head = *gn;
                return;
        }
        mo = head;
        while (mo->next != NULL)
                mo = mo->next;

        mo->next = *gn;
        (*gn)->prev = mo;

}

