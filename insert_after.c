#include"header.h"
int insert_after(dlist **head,dlist **tail,int gdata,int ndata){
  if(*head == NULL ){
    return -1;
  }
  dlist *temp = *head;
  while (temp != NULL)
  {
    /*
    allocate a memory
    validate if properly memory allocated
    asign a new data
    asign a new prev is temp prev
    new next temp
    temp prev is new
    
    the data is not a last data check the 
    new next is not a null
    asign new next prev new
    if it is last data the 
    asign tail to new
    */
    if (temp->data == gdata)
    {
      dlist *new= malloc(sizeof(dlist) );
      if(new == NULL){
        return -1;
      }
      new->data = ndata;
      new->prev =temp;
      new->next = temp->next;
      temp->next = new;
      if(new->next != NULL){
        new->next->prev = new;
      }else{
        *tail = new;
      }
      return 1;
    }
    
    temp = temp->next;
  }
  return -1;
}