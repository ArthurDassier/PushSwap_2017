/*
** EPITECH PROJECT, 2017
** actions
** File description:
** actions
*/

#include "my.h"
#include "struct.h"

int is_sup(First *first_elem)
{
	Chainlist	*actual = first_elem->first;
	int	checker = 0;

	while (actual != NULL) {
		actual = actual->next;
		if (checker > actual->nb)
			return (1);
		checker = actual->nb
	}
	return(0);
}
void ra(First *first_elem)
{

}
