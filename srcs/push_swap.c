/*
** EPITECH PROJECT, 2017
** PUSH SWAP
** File description:
** push swap
*/

#include "my.h"
#include "struct.h"

int main(int argc, char const *argv[]) {
	First *list = init(my_getnbr(argv[0]));
	int	i = 1;

	while (i != argc) {
		insert_end(list, my_getnbr(argv[i]));
		i++;
	}
	if (is_sup(list) != 1) {
		sa;
		ra;
	}
	print_list(list);
	return (0);
}
