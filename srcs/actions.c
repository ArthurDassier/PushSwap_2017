/*
** EPITECH PROJECT, 2017
** actions
** File description:
** actions
*/

#include "my.h"
#include "struct.h"

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

void sa(Chainlist **list)
{
	Chainlist	*tmp = (*list);
	Chainlist	*tmp2 = (*list)->next;

	tmp->next = tmp2->next;
	tmp2->next = tmp;
	*list = tmp2;
	my_putstr("sa ");
}

void ra(Chainlist **list)
{
	Chainlist	*tmp = *list;

	while (tmp->next != NULL) {
		tmp = tmp->next;
	}
	tmp->next = (*list);
	(*list) = (*list)->next;
	tmp = tmp->next;
	tmp->next = NULL;
	my_putstr("ra ");
}
