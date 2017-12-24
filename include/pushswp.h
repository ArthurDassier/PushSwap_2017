/*
** EPITECH PROJECT, 2017
** pushswp.h
** File description:
** struct
*/

#ifndef PUSHSWP_H
#define PUSHSWP_H
#define TAILLE_MAX 40000

typedef struct chainlist chainlist;

struct chainlist
{
	int nb;
	chainlist *next;
};

chainlist *init(int data);
void insert_begin(chainlist **first_elem, int data);
void insert_end(chainlist **first_elem, int data);
void suppression(chainlist **first_elem);
int is_sup(chainlist *first_elem);
int recup(chainlist *first_elem);
void ra(chainlist **first_elem, char *str);
void sa(chainlist **list, char *str);
void pa(chainlist **list_out, chainlist **list_in, char *str);
void pb(chainlist **list_out, chainlist **list_in, char *str);
int brain(int argc, char *argv[]);

#endif
