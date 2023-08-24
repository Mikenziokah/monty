#include "monty.h"
/**
 * push_pall - calls a function when needed
 * @head: head of the list
 * @token: files
 * @counter: number of the lines
 * Return: Always 0
 */
void push_pall(stack_t **head, char *token, unsigned int counter)
{
	instruction_t selector[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{NULL, NULL}
	};

	int travel = 0;

	while (travel < 10)
	{
		if (strcmp(selector[travel].opcode, token) == 0)
		{
			selector[travel].f(head, counter);
				return;
		}
		travel++;
	}
	if (token[0] != '#')
	{
		fprintf(stderr, "L%u: no instruction passed %s\n", counter, token);
		exit(EXIT_FAILURE);
	}
}
