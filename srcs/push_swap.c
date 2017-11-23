/*
** EPITECH PROJECT, 2017
** PUSH SWAP
** File description:
** push swap
*/

#include "my.h"
#include "struct.h"

int main(int argc, char *argv[])
{
	Chainlist	*list = init(my_getnbr(argv[1]));
	int	i = 2;

	while (i != argc) {
		insert_end(&list, my_getnbr(argv[i]));
		i++;
	}
	while (is_sup(list) == 1) {
		if (list->nb < list->next->nb)
			sa(&list);
		if (is_sup(list) == 1)
			ra(&list);
	}
	my_putchar('\n');
	return (0);
}
