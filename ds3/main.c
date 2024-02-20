#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node*next;


};

  struct node *addlast(struct node *head,int key){


         if(head==NULL)
         {
             head=(struct node*)mallocc(sizeof(struct node));
             head->data=key;
             head->next=NULL;
         }
         else
         {
             struct node *temp=(struct node*)malloc(sizeof(struct node));
             temp->data=key;
             temp->next=NULL;
             struct node*temp2=head;
             while(temp2->next!=NULL)
                temp2=temp2->next;
             temp2->next=temp;
         }
         return head;














  };

















int main()
{

}
