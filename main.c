#include"header.h"

int main(){
  int data;
  int choice;
  dlist *head = NULL;
  dlist *tail = NULL;
        printf("1.Print list\n2.Insert first\n3.Insert last\n");
  while(1){
    scanf("%d",&choice);
    switch(choice){
      default:
      printf("Enter valid choice : ");
      break;

      case 0://exit the program
      return 0;
      break;

      case 1://print the list
      print_list(head);
      break;


      case 2://insert first
      printf("Ented a data : ");
      scanf("%d",&data);
      if(insert_first(&head,&tail,data)==-1){
        printf("Allocation failed\n");
      }
      break;


      case 3: //insert last
      printf("Enter a data to insert last : ");
      scanf("%d",&data);
      if(insert_last(&head,&tail,data) == -1){
        printf("Allocation failed\n");
      }
      break;

      case 4:{
      int gdata;
      printf("Enter a gdata :");
      scanf("%d",&gdata);
      printf("Enter a new data you need to insert : ");
      scanf("%d",&data);
      if(insert_before(&head,&tail,gdata,data) ==-1){
        printf("No data found or allocation failed\n");
      }
    }
      break;


      case 5:{
      int gdata;
      printf("Enter a gdata ");
      scanf("%d",&gdata);
      printf("Enter a new data : ");
      scanf("%d",&data);
      if(insert_after(&head,&tail,gdata,data)==-1){
        printf("Allocation failed or no data found\n");
      }

      }


    

    }
  }
}