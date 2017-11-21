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

First *init(int nb);
void insert_begin(First *first_elem, int data);
void insert_end(First *first_elem, int data);
void suppression(First *first_elem);
void print_list(First *first_elem);
int is_sup(First *first_elem);
void ra(First *first_elem);
