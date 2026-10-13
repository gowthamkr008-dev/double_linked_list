#include <stdio.h>
#include <stdlib.h>

typedef struct node{
  int data;
  struct node *prev;
  struct node *next;
}dlist;

void print_list(dlist *head);
int insert_first( dlist **head,dlist **tail,int data);
int insert_last(dlist **head,dlist **tail,int data);
int insert_before(dlist **head,dlist **tail,int ,int);
int insert_after(dlist **head,dlist **tail,int ,int);