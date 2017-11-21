/*
** EPITECH PROJECT, 2017
** Chainlist
** File description:
** Chainlist
*/

#include "my.h"
#include "struct.h"
#include <stdlib.h>
#include <stdio.h>

First *init(int data)
{
	First	*first_elem = malloc(sizeof(*first_elem));
	Chainlist	*element = malloc(sizeof(*element));

	element->nb = data;
	element->next = NULL;
	first_elem->first = element;
	return(first_elem);
}

void insert_begin(First *first_elem, int data)
{
	Chainlist	*new_elem = malloc(sizeof(*new_elem));

	new_elem->nb = data;
	new_elem->next = first_elem->first;
	first_elem->first = new_elem;
}

void insert_end(First *first_elem, int data)
{
	Chainlist	*new_elem = malloc(sizeof(*new_elem));
	Chainlist	*actual = first_elem->first;

	new_elem->nb = data;
	new_elem->next = NULL;
	while (actual->next != NULL) {
		actual = actual->next;
	}
	actual->next = new_elem;
}

void suppression(First *first_elem)
{
	Chainlist	*to_supress = first_elem->first;

	if (first_elem->first != NULL) {
		first_elem->first = first_elem->first->next;
		free(to_supress);
	}
}

void print_list(First *first_elem)
{
	Chainlist	*actual = first_elem->first;

	while (actual != NULL) {
		printf("%d\n", actual->nb);
		actual = actual->next;
	}
}
