/*
** EPITECH PROJECT, 2023
** MY_PUTSTR
** File description:
** Display a string
*/

#include "my.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

const char *get_input(void)
{
    size_t line_size = 0;
    char *input = NULL;
    int length = 0;

    if (getline(&input, &line_size, stdin) <= 0) {
        exit(0);
    }
    if (input[0] == '\0')
        return NULL;
    length = my_strlen(input);
    input[length - 1] = '\0';
    return input;
}
