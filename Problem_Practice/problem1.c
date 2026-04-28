//PROBLEM - Make an Exam Result System 

/* Write a C program to manage results with roll,name,marks : perofom the following tasks :

1) Store in array
2) Sort by marks using selectionSort
3) Linked list for marks > 75
4) Stack for recent Entry of marks. */

//Name - Subham Kar
//Date - 28th April 2026



#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

// Structure
struct student {
    int roll;
    char name[50];
    float marks;
};

// Linked List Node
struct node {
    struct student data;
    struct node *next;
};

// Stack Node
struct stackNode {
    struct student data;
    struct stackNode *next;
};

struct node *head = NULL;
struct stackNode *top = NULL;

// Function to sort using selection sort
void selectionSort(struct student arr[], int n) {
    int i, j, min;
    struct student temp;

    for(i = 0; i < n - 1; i++) {
        min = i;
        for(j = i + 1; j < n; j++) {
            if(arr[j].marks < arr[min].marks) {
                min = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

// Insert into linked list (marks > 75)
void insertLinkedList(struct student s) {
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = s;
    newNode->next = head;
    head = newNode;
}

// Push into stack (recent entry)
void push(struct student s) {
    struct stackNode *newNode = (struct stackNode*)malloc(sizeof(struct stackNode));
    newNode->data = s;
    newNode->next = top;
    top = newNode;
}

// Display Linked List
void displayList() {
    struct node *temp = head;
    printf("\nStudents with marks > 75:\n");
    while(temp != NULL) {
        printf("Roll: %d Name: %s Marks: %.2f\n",
               temp->data.roll, temp->data.name, temp->data.marks);
        temp = temp->next;
    }
}

// Display Stack
void displayStack() {
    struct stackNode *temp = top;
    printf("\nRecent Entries (Stack):\n");
    while(temp != NULL) {
        printf("Roll: %d Name: %s Marks: %.2f\n",
               temp->data.roll, temp->data.name, temp->data.marks);
        temp = temp->next;
    }
}

int main() {
    struct student arr[MAX];
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Input
    for(i = 0; i < n; i++) {
        printf("\nEnter Roll, Name, Marks:\n");
        scanf("%d %s %f", &arr[i].roll, arr[i].name, &arr[i].marks);

        // Push into stack (recent entry)
        push(arr[i]);

        // If marks > 75 → Linked List
        if(arr[i].marks > 75) {
            insertLinkedList(arr[i]);
        }
    }

    // Sort
    selectionSort(arr, n);

    // Display Sorted Array
    printf("\nSorted Students (by marks):\n");
    for(i = 0; i < n; i++) {
        printf("Roll: %d Name: %s Marks: %.2f\n",
               arr[i].roll, arr[i].name, arr[i].marks);
    }

    // Display Linked List
    displayList();

    // Display Stack
    displayStack();

    return 0;
}