/*
** EPITECH PROJECT, 2017
** Struct
** File description:
** struct
*/

typedef struct Chainlist Chainlist;
typedef struct First First;

struct Chainlist
{
	int nb;
	Chainlist *next;
};

struct First
{
	Chainlist *first;
};
