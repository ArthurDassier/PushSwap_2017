/*
** EPITECH PROJECT, 2017
** PUSH SWAP
** File description:
** push swap
*/

#include "my.h"
#include "struct.h"

int main(int argc, char const *argv[]) {
	First *list = init(argv[0]);
	int	i = 1;

	while (i != argc) {
		insert_end(list, argv[i]);
	}
	return (0);
}
