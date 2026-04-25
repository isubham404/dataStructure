// Name - Subham kar
// Date - 25/04/26
// Problem - Quick Sort

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

// Array print function

void printArray(int array[] , int n)
{
    for(int i=0;i<n;i++)
        printf("%d ",array[i]);
    printf("\n");
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for(int j = low; j < high; j++) {
        if(arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i+1], &arr[high]);
    return i+1;
}

void quickSort(int arr[], int low, int high) {
    if(low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi-1);
        quickSort(arr, pi+1, high);
    }
}

void main(){
    int a[200] , n ;
    printf("Enter the range of the array : ");
    scanf("%d",&n);
    printf("Enter the Array Elements : ");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

swapCount = 0;
quickSort(a, 0, n-1);
printf("Quick Sort: ");
printArray(a, n);
printf("Swaps = %d\n", swapCount);   
        
}