/*
** EPITECH PROJECT, 2017
** actions2.c
** File description:
** actions
*/

#include "my.h"

void pb(chainlist **list_out, chainlist **list_in, char *str)
{
	chainlist	*tmp = (*list_out);
	chainlist	*tmp2 = (*list_in);

	(*list_out) = (*list_out)->next;
	(*list_in) = tmp;
	(*list_in)->next =  tmp2;
	my_strcat(str, "pb ");
}
