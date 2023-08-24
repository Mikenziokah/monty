#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - monty main program
 * @argc: arguments
 * @argv: vector
 * Return: Always successful 0
 */
int main(int argc, char *argv[])
{
	FILE *fl;
	size_t bufsize;
	stack_t *head;
	unsigned int x = 0;
	char *line_number, *token = NULL;

	if (argc != 2)
	{
		fprintf(stderr, "monty file formart\n");
		exit(EXIT_FAILURE);
	}
	fl = fopen(argv[1], "r");
	if (fl == NULL)
	{
		fprintf(stderr, "unable to open the file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (fgets(line_number, sizeof(line_number), fl))
	{
		bufsize = strlen(line_number);
			if (bufsize > 0 && line_number[bufsize - 1] == '\n')
			{
				line_number[bufsize - 1] = '\0';
			}
		line_number = strtok(token, LIMITER);
		x++;
		if (line_number)
			push_pall(&head, line_number, x);
		else if (!line_number)
			continue;
	}
	if (token)
		free(token);
	fclose(fl);
	return (0);
}
