// Name - Subham kar
// Date - 25/04/26
// Problem - Bubble Sort

#include <stdio.h>
#include <stdlib.h>

int swapCount = 0;

//Swap Function
void swap(int *a , int *b )
{
    int temp = *a;
    *a = *b ;
    *b = temp;
    swapCount++;
}

void printArray(int array[] , int n)
{
    for(int i=0;i<n;i++)
        printf("%d ",array[i]);
    printf("\n");
}

void bubbleSort(int array[] , int n )
{
    swapCount = 0;
    for(int i=0;i<n-1;i++)
    {
        for(int j =0;j<n-i-1;j++)
        {
            if(array[j] > array[j+1])
                swap(&array[j] ,&array[j+1]);
        }
    }
    printf("After Bubble Sort : ");
    printArray(array,n);
    printf("Number of swaps : %d\n",swapCount);
}

void main(){
    int a[200] , n ;
    printf("Enter the range of the array : ");
    scanf("%d",&n);
    printf("Enter the Array Elements : ");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    
    bubbleSort(a,n);
    
}