#include <stdio.h>
#include <stdlib.h>
struct student
{
    int std_number;
    int age;
    int final;
    int midterm_exam;
    struct student *next;

};

typedef struct student node;

node *addnode(node* newnode, int data)
{
   node *p=newnode;
   if(newnode==NULL){
    newnode=(node*)malloc(sizeof(node));
    newnode->next=NULL;
    newnode->std_number=new_data;
    return newnode;
   }
   else if(newnode->std_number<newdata){
    while(p->next!=NULL&&p->next->std_number<new_data){
       p=p->next;
    }
    node *temp=(node*)malloc(sizeof(node));
    temp->next=NULL;
    p->next=temp;
    temp->std_number=new_data;
    return new_data;
   }
   else{
    node *temp=(*node)malloc(sizeof(node));
    temp->std_number=new_data;
    temp->next=newnode;
    newnode=temp;
    return newnode;


       }
       void printnodes(node *n)
       {
           while(n!=NULL)
         printf("%d",n->std_number);
         n=n->next;
       }
}

int main()
{
    node *head=(node*)malloc(sizeof(node));
    head->std_number=23;
    head->next=NULL;
    head=addnode(head,10);
    head=addnode(head,104);
    head=addnode(head,41);
    head=addnode(head,23);
    head=addnode(head,25);
    head=addnode(head,33);
    head=addnode(head,140);
    head=addnode(head,78);

        printnodes(head);

}
