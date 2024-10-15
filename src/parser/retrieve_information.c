/*
** EPITECH PROJECT, 2024
** n4s
** File description:
** retrieve_information.c
*/

#include "my_macros.h"
#include "my.h"
#include "ai.h"
#include <stdio.h>
#include <stdlib.h>

const char *check_direction(ia_t *status)
{
    int i = 0;
    float distance[7] = {1500, 900, 600, 400, 200, 50, 0};
    float dirs[7] = {0.0, 0.05, 0.1, 0.2, 0.3, 0.4};
    int comp = 1;

    if (!status)
        return NULL;
    comp = status->right_distance - status->left_distance;
    status->status = (status->front_distance < 150 ||
    status->left_distance <= 20 ||
    status->right_distance <= 20) ? KO : OK;
    for (i = 0; distance[i] >= status->front_distance; i++);
    if ((comp > 0 && status->status == KO) ||
        (comp < 0 && status->status != KO))
        return (execute("WHEELS_DIR:%.4f\n", dirs[i], &status->status));
    else
        return (execute("WHEELS_DIR:-%.4f\n", dirs[i], &status->status));
}

const char *adaptive_forward(ia_t *status)
{
    int i = 0;
    float speed[6] = {1, 0.8, 0.6, 0.3, 0.2, 0.1};
    float distance[6] = {2000, 1100, 800, 400, 200, 0};

    if (!status)
        return NULL;
    for (i = 0; distance[i] > status->front_distance; i++);
    return (execute("CAR_FORWARD:%.2f\n", speed[i], &status->status));
}

const char *backward(ia_t *status)
{
    int i = 0;
    float distance[6] = {2000, 1100, 800, 400, 200, 0};
    float speed[6] = {1, 0.8, 0.6, 0.3, 0.2, 0.1};

    if (!status)
        return NULL;
    for (i = 0; distance[i] > status->front_distance; i++);
    return (execute("CAR_BACKWARD:%.2f\n", speed[i], &status->status));
}
