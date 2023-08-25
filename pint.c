#include "monty.h"
/**
 * pint - value on top
 * @head: double pointer
 * @line_number: line number
 */
void pint(stack_t **head, unsigned int line_number)
{
	stack_t *new;

	new = *head;

	if (new == NULL)
	{
		printf("L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", new->n);
}
