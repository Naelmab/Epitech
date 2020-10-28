/*
** EPITECH PROJECT, 2020
** tools2
** File description:
** tools2
*/

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

#include "my.h"

void MULTI(char **str, int * op3){
    while (**str == '*') {
        (*str)++;
        if (**str == '-') {
            (*str)++;
            int op4 = brakets(str);
            *op3 = -(*op3 * op4);
        } else {
            int op4 = brakets(str);
            *op3 = *op3 * op4;
        }
        DIVIS(str, op3);
        MODULO(str, op3);
    }
}

void DIVIS(char **str, int * op3) {
    while (**str == '/') {
        (*str)++;
        if (**str == '-') {
            (*str)++;
            int op4 = brakets(str);
            *op3 = -(*op3 / op4);
        } else {
            int op4 = brakets(str);
            *op3 = *op3 / op4;
        }
        MODULO(str, op3);
        MULTI(str, op3);
    }
}

void MODULO(char **str, int * op3) {
    while (**str == '%') {
        (*str)++;
        if (**str == '-') {
            (*str)++;
            int op4 = brakets(str);
            *op3 = -(*op3 % op4);
        } else {
            int op4 = brakets(str);
            *op3 = *op3 % op4;
        }
        MULTI(str, op3);
        DIVIS(str, op3);
    }
}

void ADD(char **str, int * op0) {
        while (**str == '+') {
            (*str)++;
            if (**str == '-') {
                (*str)++;
                int op1 = ALLFACT(str);
                *op0 = *op0 - op1;
            } else {
                int op1 = ALLFACT(str);
                *op0 = *op0 + op1;
            }
            SUB(str, op0);
    }
}

void SUB(char **str, int * op0) {
        while (**str == '-') {
            (*str)++;
            if (**str == '-') {
                (*str)++;
                int op1 = ALLFACT(str);
                *op0 = *op0 + op1;
            } else {
                int op1 = ALLFACT(str);
                *op0 = *op0 - op1;
            }
            ADD(str, op0);
    }
}