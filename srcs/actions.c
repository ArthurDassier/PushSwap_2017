/*
** EPITECH PROJECT, 2017
** actions.c
** File description:
** actions
*/

#include "my.h"

int is_sup(Chainlist *first_elem)
{
	Chainlist	*actual = first_elem;

	while (actual->next != NULL) {
		if (actual->nb > actual->next->nb)
			return(1);
		actual = actual->next;
	}
	return(0);
}

void sa(Chainlist **list, char *str)
{
	Chainlist	*tmp = (*list);
	Chainlist	*tmp2 = (*list)->next;

	tmp->next = tmp2->next;
	tmp2->next = tmp;
	*list = tmp2;
	my_strcat(str, "sa ");
}

void ra(Chainlist **list, char *str)
{
	Chainlist	*tmp = *list;

	while (tmp->next != NULL) {
		tmp = tmp->next;
	}
	tmp->next = (*list);
	(*list) = (*list)->next;
	tmp = tmp->next;
	tmp->next = NULL;
	my_strcat(str, "ra ");
}

void pa(Chainlist **list_out, Chainlist **list_in, char *str)
{
	Chainlist	*tmp = (*list_out);
	Chainlist	*tmp2 = (*list_in);

	(*list_out) = (*list_out)->next;
	(*list_in) = tmp;
	(*list_in)->next =  tmp2;
	my_strcat(str, "pa ");
}

int recup(Chainlist *first_elem)
{
	Chainlist	*tmp = first_elem;
	Chainlist	*tmp2 = first_elem;

	while (tmp->next != NULL) {
		if (tmp2->nb > tmp->next->nb)
			return (0);
		tmp = tmp->next;
	}
	return(1);
}
