#include "monty.h"
/**
 * push_pall - calls a function when needed
 * @head: head of the list
 * @file: files
 * @counter: number of the lines
 * Return: Always 0
 */
void push_pall(stack_t **head, char *file, unsigned int counter)
{
	call_t selector[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop}
		{NULL, NULL}
	};

	int travel = 0;

	while (travel < 10)
	{
		if (strcmp(selector[travel].opcode, file) == 0)
		{
			selector[travel].f(head, counter)
				return;
		}
		travel++;
	}
	if (file[0] != '*')
	{
		fprint(stderr, "L%U: no instruction passed %s\n", counter, file);
		exit(EXIT_FAILURE);
	}
}
