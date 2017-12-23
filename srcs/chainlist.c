/*
** EPITECH PROJECT, 2017
** chainlist.c
** File description:
** chainlist
*/

#include "my.h"

chainlist *init(int data)
{
	chainlist	*element = malloc(sizeof(*element));

	element->nb = data;
	element->next = NULL;
	return(element);
}

void insert_begin(chainlist **first_elem, int data)
{
	chainlist	*new_elem = malloc(sizeof(chainlist));

	if (new_elem == NULL)
		return;
	new_elem->nb = data;
	new_elem->next = *first_elem;
	(*first_elem) = new_elem;
}

void insert_end(chainlist **first_elem, int data)
{
	chainlist	*new_elem = malloc(sizeof(chainlist));
	chainlist	*actual = (*first_elem);

	if (new_elem == NULL)
		return;
	new_elem->nb = data;
	new_elem->next = NULL;

	while (actual->next != NULL) {
		actual = actual->next;
	}
	actual->next = new_elem;
}

void print_list(chainlist *first_elem)
{
	chainlist	*actual = first_elem;

	while (actual != NULL) {
		//my_put_nbr("%d\n", actual->nb);
		actual = actual->next;
	}
}
