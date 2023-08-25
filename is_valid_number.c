#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_valid_number - checks if a string represents a valid integer
 * @str: the string to check
 * Return: 1 if valid integer, 0 otherwise
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
