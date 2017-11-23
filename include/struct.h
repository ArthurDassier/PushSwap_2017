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

Chainlist *init(int data);
void insert_begin(Chainlist **first_elem, int data);
void insert_end(Chainlist **first_elem, int data);
void suppression(Chainlist **first_elem);
void print_list(Chainlist *first_elem);
int is_sup(Chainlist *first_elem);
void ra(Chainlist **first_elem);
void sa(Chainlist **list);
