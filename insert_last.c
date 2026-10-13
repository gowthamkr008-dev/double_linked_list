#include"header.h"

int insert_last(dlist **head,dlist **tail,int data){
  dlist *new = malloc(sizeof(dlist));
  if(new == NULL){
    return -1;
  }
  new->data =data;
  new->next = NULL;
  new->prev = *tail;
  if( (*head) == NULL ){
    *head = new;
    *tail = new;
    return 1;
    }
    (*tail)->next = new;
    *tail = new;
    return 1;
  

}