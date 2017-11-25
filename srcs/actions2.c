/*
** EPITECH PROJECT, 2017
** Actions2
** File description:
** sctions
*/

#include "my.h"
#include "struct.h"

void pb(Chainlist **list_out, Chainlist **list_in, char *str)
{
	Chainlist	*tmp = (*list_out);
	Chainlist	*tmp2 = (*list_in);

	(*list_out) = (*list_out)->next;
	(*list_in) = tmp;
	(*list_in)->next =  tmp2;
	my_strcat(str, "pb ");
}
