#include "monty.h"
#include <stdlib.h>

/**
 * free_stack - frees a stack of nodes
 * @stack: pointer to the head of the stack
 */
void free_stack(stack_t *stack)
{
    stack_t *temp;

    while (stack != NULL)
    {
        temp = stack;
        stack = stack->next;
        free(temp);
    }
}
