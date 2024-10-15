/*
** EPITECH PROJECT, 2023
** B-AIA-200-BDX-2-1-n4s-lucas.ludovic
** File description:
** ai.h
*/

#ifndef AI_H_
    #define AI_H_

    #include <unistd.h>

typedef enum status_t {
    ENDED,
    OK,
    KO
} status_t;

typedef struct ia_t {
    status_t status;
    size_t finish_line;
    int front_distance;
    int left_middle_distance;
    int right_middle_distance;
    int right_distance;
    int left_distance;
} ia_t;

void sensor(ia_t *status);
const char *execute(const char *command, ...);
ia_t *setup_car(void);
const char *check_direction(ia_t *status);
const char *adaptive_forward(ia_t *status);
const char *backward(ia_t *status);
int need_four_stek(void);

#endif
