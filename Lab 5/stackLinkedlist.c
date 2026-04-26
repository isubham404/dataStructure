#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next ;
};

struct node *top = NULL;

void push(int val)
{
    struct node *newNode = (struct node*)malloc(sizeof(struct node));

    if(newNode==NULL)
    {
        printf("Stack Overflow condition.\n");
        return;
    }

    newNode->data=val;
    newNode->next=top;
    top=newNode;

    printf("%d pushed to the stack.\n",val); 
}

void pop()
{
    if(top==NULL)
    {
        printf("Stack UnderFLow.\n");
        return;
    }

    struct node *temp = top;
    printf("%d is popped from the stack !!",top->data);
    top = top->next;
    free(temp);
    
}

void peek()
{
    if(top==NULL)
    {
        printf("Stack is empty !!");
        return;
    }
    else
    {
        printf("Top element is %d\n",top->data);
    }
}

void display()
{
    if(top==NULL)
    {
        printf("Stack is Empty !!");
        return;
    }
    
    struct node *temp = top;\
    printf("The stack Elements are :\n");
    while(temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp = temp->next;
    }

}

void main(){

    int choice,val;

    while(1)
    {
    printf("\nChoose the number accordingly!!\n\n1)PUSH element to the stack\n2)POP element from the stack\n3)Peek the stack\n4)Display the stack\n5)Exit\n\n");
    printf("Enter the choice : ");
    scanf("%d",&choice);


    switch (choice)
    {
    case 1:
        printf("Enter the value to push to the stack : ");
        scanf("%d",&val);
        push(val);
        break;
    
    case 2: 
        pop();
        break;
    
    case 3: 
        peek();
        break;

    case 4: 
        display();
        break;

    case 5:
        exit(0);

    default:
        printf("Invalid choice !!\n");
        break;
    }
}

}