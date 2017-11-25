/*
** EPITECH PROJECT, 2017
** PUSH SWAP
** File description:
** push swap
*/

#include "my.h"
#include "struct.h"

void main(int argc, char *argv[])
{
	Chainlist	*list_a = init(my_getnbr(argv[1]));
	Chainlist	*list_b = NULL;
	char 	*str = malloc(sizeof(char) * 400000);

	if (argc > 600)
		return;
	for (int i = 2; i != argc; i++)
		insert_end(&list_a, my_getnbr(argv[i]));
	while (is_sup(list_a) == 1) {
		if (list_a->nb == recup(list_a))
		pa(&list_a, &list_b, str);
		if (is_sup(list_a) == 1)
			ra(&list_a, str);
	}
	while (list_b != NULL) {
		pb(&list_b, &list_a, str);
	}
	if (is_sup(list_a) == 1)
		sa(&list_a, str);
	write(1, str, (my_strlen(str) - 1));
	free(str);
	my_putchar('\n');
}
