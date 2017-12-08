/*
** EPITECH PROJECT, 2017
** chainlist.c
** File description:
** chainlist
*/

#include "my.h"

Chainlist *init(int data)
{
	Chainlist	*element = malloc(sizeof(*element));

	element->nb = data;
	element->next = NULL;
	return(element);
}

void insert_begin(Chainlist **first_elem, int data)
{
	Chainlist	*new_elem = malloc(sizeof(Chainlist));

	if (new_elem == NULL)
		return;
	new_elem->nb = data;
	new_elem->next = *first_elem;
	(*first_elem) = new_elem;
}

void insert_end(Chainlist **first_elem, int data)
{
	Chainlist	*new_elem = malloc(sizeof(Chainlist));
	Chainlist	*actual = (*first_elem);

	if (new_elem == NULL)
		return;
	new_elem->nb = data;
	new_elem->next = NULL;

	while (actual->next != NULL) {
		actual = actual->next;
	}
	actual->next = new_elem;
}

void print_list(Chainlist *first_elem)
{
	Chainlist	*actual = first_elem;

	while (actual != NULL) {
		printf("%d\n", actual->nb);
		actual = actual->next;
	}
}
