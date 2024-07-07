#ifndef MAIN_H
#define MAIN_H
#include <stdio.h.>
#include <stdlib.h>
#include <
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);

struct Link {
int data;
struct Link *next;
};

node create(){
node temp;
temp = (node)malloc(sizeof(struct Link));
temp->next = NULL
return(temp);
};
