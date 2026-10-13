#include"header.h"

void print_list(dlist *head){
  if(head== NULL){
    return;
  }
  printf("Head <-> ");
  while(head){
    printf("%d <-> ",head->data);
    head = head->next;
  }
  printf("tail\n");

}