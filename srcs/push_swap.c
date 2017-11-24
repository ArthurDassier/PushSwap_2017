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
	if (argc > 2000)
		return(0);
	Chainlist	*list_a = init(my_getnbr(argv[1]));
	Chainlist	*list_b = NULL;
	char 	*str = malloc(sizeof(char) * 50000000);
	int	i = 2;
	int	j = 0;

	while (i != argc) {
		insert_end(&list_a, my_getnbr(argv[i]));
		i++;
	}
	while (is_sup(list_a) == 1) {
		if (is_sup(list_a) == 1){
			ra(&list_a);
			str[j] = 'r';
			str[j + 1] = 'a';
			str[j + 2] = ' ';
			j = j + 3;
		}
		if (list_a->nb == recup(list_a)) {
			pa(&list_a, &list_b);
			str[j] = 'p';
			str[j + 1] = 'a';
			str[j + 2] = ' ';
			j = j + 3;
		}
	}
	while (list_b != NULL) {
		pb(&list_b, &list_a);
		str[j] = 'p';
		str[j + 1] = 'b';
		str[j + 2] = ' ';
		j = j + 3;
	}
	str[j - 1] = '\0';
	my_putstr(str);
	my_putchar('\n');
	return (0);
}
