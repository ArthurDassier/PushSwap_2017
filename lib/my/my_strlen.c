/*
** EPITECH PROJECT, 2017
** TASK03
** File description:
** mystrlenght
*/

int my_strlen (char const *str)
{
	int	i = 0;

	while (str[i] != '\0') {
		i = i + 1;
	}
	return(i);
}
