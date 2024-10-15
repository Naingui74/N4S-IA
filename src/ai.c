/*
** EPITECH PROJECT, 2023
** B-AIA-200-BDX-2-1-n4s-lucas.ludovic
** File description:
** ai.c
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include "my.h"
#include "ai.h"
#include "retrieve_information.h"

void sensor(ia_t *status)
{
    const char *statu = NULL;
    static char **response;
    int i = 0;

    statu = execute("GET_INFO_LIDAR\n", &status->status);
    response = my_str_to_word_array((char *)statu, ":");
    if (!response) {
        return;
    }
    for (i = 0; response[i] != NULL; i++);
    if (i >= 34 && response[34]) {
        status->left_distance = atof(response[3]);
        status->front_distance = atof(response[15]);
        status->right_distance = atof(response[34]);
    }
    for (i = 0; response[i]; i++)
        free(response[i]);
    free(response);
}

const char *execute(const char *command, ...)
{
    ia_t *status = NULL;
    char *input = NULL;
    va_list arg;

    if (!command)
        return NULL;
    va_start(arg, command);
    vdprintf(1, command, arg);
    input = (char *)get_input();
    if (input == NULL) {
        exit(EXIT_FAILURE);
        status->status = ENDED;
        return NULL;
    }
    if (strstr(input, "Track Cleared") != NULL)
        status->status = ENDED;
    va_end(arg);
    return (input);
}

ia_t *setup_car(void)
{
    ia_t *status = malloc(sizeof(ia_t));

    if (!status)
        return NULL;
    status->front_distance = 0;
    status->left_distance = 0;
    status->right_distance = 0;
    status->status = OK;
    return status;
}

int need_four_stek(void)
{
    ia_t *status = setup_car();

    if (!status) {
        return 84;
    }
    execute("START_SIMULATION\n");
    while (status->status != ENDED) {
        if (status->status == KO)
            execute("CAR_BACKWARDS:%.4f\n", 0.2, status->status);
        else
            adaptive_forward(status);
        sensor(status);
        check_direction(status);
    }
    execute("STOP_SIMULATION\n");
    free(status);
    return 0;
}
