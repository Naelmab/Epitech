/*
** EPITECH PROJECT, 2020
** my
** File description:
** my
*/

#ifndef MY_H_
# define MY_H_

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

int main(int ac, char **av);
int eval_expr(char const *str);
int chartoint (char **str);
int brakets(char **str);
int factors(char **str);
int ADD(char **str);
int SUB(char **str);
void MULTI(char **str, int * op3);
void DIVIS(char **str, int * op3);
void MODULO(char **str, int * op3);
int my_put_nbr(int nb);
void my_putchar(char c);
int ALLFACT(char ** str);

#endif
