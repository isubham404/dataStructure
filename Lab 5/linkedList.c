#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node * next ;
};
struct node *head = NULL;

void main(){

    int choice =1  ;
    struct node *temp;

    while(choice)
    {
        printf("Enter 1 for creating a node.\nEnter 0 to stop..\n");
        scanf("%d",&choice);

        if(choice==0)
        {
            break;
        }

        struct node *newNode = (struct node*)malloc(sizeof(struct node));
        

        printf("Enter the data for the list : ");
        scanf("%d",&newNode->data);
        newNode->next=NULL;

        if(head==NULL)
        {
            head=newNode;
            temp = newNode;
        }
        else
        {
            temp->next=newNode;
            temp=newNode;
        }


        printf("Added to the list..\n\n");

    }

    temp = head;

    if(head==NULL)
    {
        printf("The linked list is empty !!\n");
    }
    printf("The Linked List is\n");
    while(temp!=NULL)
    {
        printf("%d -> ",temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
    
}