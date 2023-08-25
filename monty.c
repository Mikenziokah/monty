#include "monty.h"
#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    FILE *file;
    char line[256];
    char *opcode;
    stack_t *head = NULL;
    unsigned int x = 0;

    if (argc != 2) {
        fprintf(stderr, "monty file format\n");
        exit(EXIT_FAILURE);
    }

    file = fopen(argv[1], "r");
    if (file == NULL) {
        fprintf(stderr, "unable to open the file %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    while (fgets(line, sizeof(line), file)) {
        opcode = strtok(line, " \t\n");
        x++;

        if (opcode != NULL) {
            if (strcmp(opcode, "push") == 0) {
                char *arg = strtok(NULL, " \t\n");
                if (arg == NULL || !is_valid_number(arg)) {
                    fprintf(stderr, "L%u: usage: push integer\n", x);
                    exit(EXIT_FAILURE);
                }
                push(&head, atoi(arg));
            } else if (strcmp(opcode, "pall") == 0) {
                pall(&head, x);
            } else if (strcmp(opcode, "pint") == 0) {
                pint(&head, x);
            } else if (strcmp(opcode, "pop") == 0) {
                pop(&head, x);
            } else {
                fprintf(stderr, "L%u: unknown instruction %s\n", x, opcode);
                exit(EXIT_FAILURE);
            }
        }
    }

    fclose(file);
    free_stack(head);

    return (EXIT_SUCCESS);
}
