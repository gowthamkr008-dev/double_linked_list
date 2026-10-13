#include "header.h"

int insert_before(dlist **head,dlist **tail,int gdata,int ndata){
  if( *head == NULL){
    return -1;
  }
  dlist *temp = *head;
  while(temp != NULL){
    //asign a memory for new list
    //validata is properly allocated
    //asign a new data
    //asign a new next to temp
    //asign new prev is a temp prev
    // now temp prev is now a new
    //if the given data is present in first will try to access the prevnode lead to segmentation fault
    // validata if the g data present in head asign in new to head
    //if not a gdata asign new prev next to asign new
    if(temp->data == gdata){
    dlist *new = malloc(sizeof(dlist ));
    if(new == NULL){
      return -1;
    }
    new->data = ndata;
     new->next =temp;
    new->prev =temp->prev;
    temp->prev = new;
    if(new->prev  != NULL){
      new->prev->next = new;
    }else{
      *head = new;
    }
  return 1;
  }
    temp = temp->next;
  }
  
return -1;
}