#include "monty.h"
/**
 * _pint - value on top
 * @hea:d double pointer
 * @line_number: line number
 */
void _pint(stack_t **head, unsigned int line_number)
{
	stack_t *new;
	new = *top;

	if (new == NULL)
	{
		printf("L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", new->n);
}
