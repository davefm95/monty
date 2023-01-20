#include "monty.h"
/**
 *pint - prints node at top of stack
 *@head: pointer to head pointer
 *@ln: line no
 */
void pint(stack_t **head, unsigned int ln)
{
	(void)ln;
	if (*head)
		printf("%d\n", (*head)->n);
	else
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", ln);
		exit(EXIT_FAILURE);
	}
}
