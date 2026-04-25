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

void insertionSort(int arr[], int n) {
    swapCount = 0;
    for(int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        
        while(j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
            swapCount++;  // counting shifts as swaps
        }
        arr[j+1] = key;
    }
    printf("Insertion Sort: ");
    printArray(arr, n);
    printf("Shifts = %d\n", swapCount);
}

void main(){
    int a[200] , n ;
    printf("Enter the range of the array : ");
    scanf("%d",&n);
    printf("Enter the Array Elements : ");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    insertionSort(a,n);
    
    
    
}