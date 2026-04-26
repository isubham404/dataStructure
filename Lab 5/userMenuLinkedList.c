#include <stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

void insertAtBegining(int val)
{
    struct node * newNode = (struct node*) malloc(sizeof(struct node));
    newNode -> data = val;
    newNode->next = head;
    head = newNode;
    printf("Inserted %d at begining..\n\n",val);
}

void insertAtEnd(int val)
{
    struct node *newNode = (struct node*) malloc(sizeof(struct node));
    newNode->data=val;
    newNode->next=NULL;

    if(head==NULL)
    {
        head = newNode;
        return;
    }
    struct node *temp = head;
    while (temp->next!=NULL)
    {
        temp = temp->next;
    }

    temp->next=newNode;
    printf("Inserted %d at end..\n\n",val);
    
}

void insertAtPos(int pos , int val)
{
    struct node * newNode = (struct node*)malloc(sizeof(struct node));
    newNode ->data = val;

    if(pos ==1 )
    {
        newNode->next = head ;
        head = newNode;
        return;
    }

    struct node *temp = head;
    for(int i =1;(i<pos-1 && temp!= NULL ); i++)
        temp = temp->next;
    if(temp==NULL)
    {
        printf("Invalid position.\n");
        return;
    }

    newNode->next= temp->next;
    temp->next=newNode;

    printf("Inserted %d at position %d..\n\n",val,pos);

}

void deleteBegining()
{
    if(head==NULL)
    {
        printf("The List is Empty..\n");
        return;
    }
    struct node *temp = head;
    head = head->next;
    free(temp);
}

void deleteEnd()
{
    if(head==NULL)
    {
        printf("The list is empty.\n");
        return;
    }

    if(head->next==NULL)
    {
        free(head);
        head = NULL;
        return;
    }

    struct node *temp = head ;
    if(temp->next->next !=NULL)
        temp = temp->next;

    free(temp->next);
    temp->next = NULL;
    
}

void deletePosition(int pos)
{
    if(head==NULL)
    {
        printf("The list is Empty.\n");
        return;
    }

    if(pos == 1)
    {
        struct node *temp = head;
        head = head-> next;
        free(temp);
        return;
    }

    struct node *temp = head;
    for(int i=1;i<pos-1 && temp->next!=NULL;i++)
        temp = temp->next;

    if(temp->next==NULL)
    {
        printf("Invalid Position.\n");
        return;
    }

    struct node *del = temp->next;
    temp->next=del->next;
    free(del);

}

void display()
{
    struct node *temp = head ;
    if(temp==NULL)
    {
        printf("The list is Empty.\n");
        return;
    }
    while(temp!=NULL)
    {
        printf("%d -> ",temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void main(){
    int choice,val , pos;
    while (1)
    {
        printf("Chose an option to perform from the given..\n\n");
        printf("1) Insert at Begining\n2)Insert at End\n3)Insert at any position\n4)Delete From Begining\n5)Delete From End\n6) Delete from any position\n7) Display\n8)Exit\n\n");

        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            printf("Enter the value to be inserted : ");
            scanf("%d",&val);
            insertAtBegining(val);
            break;
        case 2:
            printf("Enter the value to be inserted : ");
            scanf("%d",&val);
            insertAtEnd(val);
            break;
        case 3:
            printf("Enter the position : ");
            scanf("%d",&pos);
            printf("Enter the Value to be inserted : ");
            scanf("%d",&val);
            insertAtPos(pos,val);
            break;
        case 4:
            printf("Deleted the first node.\n");
            deleteBegining();
            break;
        case 5:
            printf("Deleted the last node.\n");
            deleteEnd();
            break;
        case 6:
            printf("Enter the position to be deleted : ");
            scanf("%d",&pos);
            printf("Deleted the node at %d.\n",pos);
            deletePosition(pos);

            break;
        case 7:
            printf("The Linked List is --\n");
            display();
            break;
        case 8:
            exit(0);

        default:
            printf("Invalid Choice !!\n");
            break;
        }

    }
    
}