#include "monty.h"
/**
 * pop - removes the top element
 * @stack: nodes
 * @line_number: line
 */

void pop(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;

	stack_t *new = *stack;

	if (head == NULL || head == NULL)
	{
		fprint(stderr, "L%u: can't pop on empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	new = (*head)->next;
	free(*head);
	*head = new;
}
