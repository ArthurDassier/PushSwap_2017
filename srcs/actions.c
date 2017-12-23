/*
** EPITECH PROJECT, 2017
** actions.c
** File description:
** actions
*/

#include "my.h"

int is_sup(chainlist *first_elem)
{
	chainlist	*actual = first_elem;

	while (actual->next != NULL) {
		if (actual->nb > actual->next->nb)
			return(1);
		actual = actual->next;
	}
	return(0);
}

void sa(chainlist **list, char *str)
{
	chainlist	*tmp = (*list);
	chainlist	*tmp2 = (*list)->next;

	tmp->next = tmp2->next;
	tmp2->next = tmp;
	*list = tmp2;
	my_strcat(str, "sa ");
}

void ra(chainlist **list, char *str)
{
	chainlist	*tmp = *list;

	while (tmp->next != NULL) {
		tmp = tmp->next;
	}
	tmp->next = (*list);
	(*list) = (*list)->next;
	tmp = tmp->next;
	tmp->next = NULL;
	my_strcat(str, "ra ");
}

void pa(chainlist **list_out, chainlist **list_in, char *str)
{
	chainlist	*tmp = (*list_out);
	chainlist	*tmp2 = (*list_in);

	(*list_out) = (*list_out)->next;
	(*list_in) = tmp;
	(*list_in)->next =  tmp2;
	my_strcat(str, "pa ");
}

int recup(chainlist *first_elem)
{
	chainlist	*tmp = first_elem;
	chainlist	*tmp2 = first_elem;

	while (tmp->next != NULL) {
		if (tmp2->nb > tmp->next->nb)
			return (0);
		tmp = tmp->next;
	}
	return(1);
}
