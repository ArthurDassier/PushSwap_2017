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
int recup(Chainlist *first_elem);
void ra(Chainlist **first_elem, char *str);
void sa(Chainlist **list, char *str);
void pa(Chainlist **list_out, Chainlist **list_in, char *str);
void pb(Chainlist **list_out, Chainlist **list_in, char *str);
