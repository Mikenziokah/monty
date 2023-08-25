#include "monty.h"
/**
 * is_valid_number - checks if its a valid integer
 * @str: string
 * Return: 1 if valid else 0
 */
int is_valid_number(const char *str)
{
	if (!str || *str == '\0')
		return (0);
	if (*str == '-' || *str == '+')
		str++;
	if (*str == '\0')
		return (0);

	while (*str)
	{
		if (!isdigit(*str))
			return (0);
		str++;
	}
	return (1);
}
