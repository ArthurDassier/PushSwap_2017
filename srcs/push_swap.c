/*
** EPITECH PROJECT, 2017
** push_swap.c
** File description:
** pushwap
*/

#include "my.h"

int brain(int argc, char *argv[])
{
	chainlist	*list_a = init(my_getnbr(argv[1]));
	chainlist	*list_b = NULL;
	char	*str = malloc(sizeof(char) * TAILLE_MAX);

	for (int i = 2; i != argc; i++)
		insert_end(&list_a, my_getnbr(argv[i]));
	while (is_sup(list_a) == 1) {
		if (is_sup(list_a) == 1)
			ra(&list_a, str);
		if (recup(list_a) == 1)
			pb(&list_a, &list_b, str);
	}
	while (list_b != NULL)
		pa(&list_b, &list_a, str);
	if (my_strlen(str) > 1)
		write(1, str, (my_strlen(str) - 1));
	free(str);
	my_putchar('\n');
	return(0);
}

int main(int argc, char *argv[])
{
	if (argc > 600)
		return(84);
	brain(argc, argv);
	return (0);
}
