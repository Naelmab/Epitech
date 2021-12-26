/*
** EPITECH PROJECT, 2020
** my.h
** File description:
** my.h
*/

#ifndef MY_H_
# define MY_H_


#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <math.h>

///////////////////////////////My_Printf/////////////////////////////////////////
int my_printf(const char *format, ...);

void s(va_list *list);
void c(va_list *list);
void i(va_list *list);
void l(va_list *list);
void u(va_list *list);
void o(va_list *list);
void ret(va_list *list);
void f(va_list *list);
void b(va_list *list);
void sign(va_list *list);
void x(va_list *list);
void xmaj(va_list *list);
char printmodulo();
void p(va_list * list);

void my_putchar(char c);
int my_put_intnbr(int nb);
int my_put_longnbr(long long nb);
unsigned int my_put_unsinednbr(unsigned int nb);
int my_put_unsinedllenbr(unsigned long long nb);
int my_put_floatnbr(float nb);
int my_put_signnbr(int nb);
int pwr(int base, int exp);
int putadresse(int n);

unsigned int my_put_octal(unsigned int nb);
unsigned int my_put_hexadecimal(unsigned int nb);
unsigned int my_put_hexadecimaj(unsigned int nb);
int my_put_binaire(unsigned int nb);
///////////////////////////////My_Printf/////////////////////////////////////////

//////////////////////////////////lib//////////////////////////////////////////
void my_putchar(char c);
int **inttotab(char *str);
char *my_strstr(char *str, char const *to_find);
int my_isneg(int nb);
int my_strcmp(char const *s1, char const *s2);
int my_put_nbr(int nb);
int my_strncmp(char const *s1, char const *s2, int n);
void swap(int *a, int *b);
char *my_strupcase(char *str);
void my_putstr(char const *str);
char *my_strlowcase(char *str);
int my_strlen(char const *str);
char *my_strcapitalize(char *str);
int my_getnbr(char const *str);
int my_str_isalpha(char const *str);
void my_sort_int_array(int *array, int size);
char **my_str_to_word_array(char *str, char *delim);
int my_str_isnum(char const *str);
int my_compute_power_rec(int nb, int power);
int my_str_islower(char const *str);
int my_compute_square_root(int nb);
int my_str_isupper(char const *str);
int my_is_prime(int nb);
int my_str_isprintable(char const *str);
int my_find_prime_sup(int nb);
int my_showstr(char const *str);
char *my_strcpy(char *dest, char const *src);
int my_showmem(char const *str, int size);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strcat(char *dest, char const *src);
char *my_revstr(char *str);
char *my_strncat(char *dest, char const *src, int nb);
/////////////////////////////////lib///////////////////////////////////////////

#endif
