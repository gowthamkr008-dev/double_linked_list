#include"header.h"

int insert_first( dlist **head,dlist **tail,int data){
  dlist *new =malloc(sizeof(dlist));
  if(new == NULL){
    return -1;
  }
  new->data = data;
  new->prev = NULL;
  new->next = *head;
  if(*head == *tail ){
    *tail = new;
    *head = new;
    return 1;
  }
  (*head)->prev =new;
  *head =new;
  return 1;
}