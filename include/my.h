/*
** EPITECH PROJECT, 2017
** my.h
** File description:
** mes_prototypes
*/
#ifndef MYLIB_H
#define MYLIB_H
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void my_putchar (char c);
int my_isneg(int nb);
int my_put_nbr(int nb);
void my_swap(int *a, int *b);
void my_putstr (char const *str);
int my_strlen (char const *str);
int my_getnbr(char const *str);
char *my_strcat(char *dest, char const *src);

#endif /* protection double declaration */
