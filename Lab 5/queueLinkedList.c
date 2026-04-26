#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;

};

struct node *front = NULL;
struct node *rear = NULL;


void enqueue(int val)
{
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    if(newNode==NULL)
    {
        printf("Queue overflow !!\n");
        return;
    }
    newNode -> data=val;
    newNode->next=NULL;

    if(front==NULL && rear==NULL)
    {
        front=rear=newNode;
    }
    else{
        rear->next=newNode;
        rear = newNode;

    }
    printf("%d is inserted into the queue..",val);
}

void dequeue()
{
    //Queue underflow case 
    if(front ==NULL)
    {
        printf("Queue Underflow !!");
        return;
    }

    struct node *temp = front;
    printf("%d is removed from the queue ..",front->data);
    front = front->next;

    if(front==NULL)
    {
        rear=NULL;
    }
    free(temp);
}

void peek()
{
    if (front == NULL) {
        printf("Queue is empty\n");
    } else {
        printf("Front element is %d\n", front->data);
    }
}

void display()
{
    if(front==NULL)
    {
        printf("Queue is empty !!\n");
        return;
    }

    struct node *temp = front;
    printf("Queue elements are :\n");

    while(temp!=NULL)
    {
        printf("%d -> ",temp->data);
        temp = temp->next;
    }

    printf("NULL\n");


}

void main(){
    int choice, val;

    while (1) {
        printf("\n1. Enqueue\n2. Dequeue\n3. Peek\n4. Display\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value: ");
                scanf("%d", &val);
                enqueue(val);
                break;

            case 2:
                dequeue();
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
                printf("Invalid choice\n");
        }
    }
}