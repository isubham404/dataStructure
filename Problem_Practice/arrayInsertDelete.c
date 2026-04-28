#include <stdio.h>
#include <stdlib.h>

void insert(int a[], int *n, int pos, int val)
{
    for(int i = *n; i >= pos; i--)
    {
        a[i] = a[i-1];
    }
    a[pos-1] = val;
    (*n)++;
}

void delete(int a[], int *n, int pos)
{
    for(int i = pos-1; i < *n - 1; i++)
    {
        a[i] = a[i+1];
    }
    (*n)--;
}

void main(){
    int a[100],i,n,choice,pos,val;
    printf("Enter the size of the array : ");
    scanf("%d",&n);

    printf("Enter the elements of the array : ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    
    
    while(1){    
    printf("1) Insert an Element\n2) Delete an Element\n3) Display\n4) Exit\n");

    printf("\nEnter the choice : ");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        printf("Enter the position where the value is to be inserted : ");
        scanf("%d",&pos);
        printf("Enter the value to be inserted : ");
        scanf("%d",&val);
        insert(a,&n,pos,val);
        printf("%d inserted at position %d.\n",val,pos);
        break;

    case 2:
        printf("Enter the position where the value is to be inserted : ");
        scanf("%d",&pos);
        delete(a,&n,pos);
        printf("Deleted successfully.\n");
        break;
    
    case 3:
        for(i=0;i<n;i++)
            printf("%d ",a[i]);
        printf("\n");
        break;

    case 4:
        exit(0);
        break;

    default:
        printf("Wrong Input !!\n");
        break;
    }
    }
}