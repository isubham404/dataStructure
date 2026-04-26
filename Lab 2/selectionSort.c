#include <stdio.h>


void selectionSort(int arr[], int n) {
    int i, j, min, temp;

    for(i = 0; i < n - 1; i++) {
        min = i;

        for(j = i + 1; j < n; j++) {
            if(arr[j] < arr[min])
                min = j;
        }

        // Swap
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}

int main() {
    int a[200];
    int n;
    printf("Enter the range of array : ");
    scanf("%d",&n);

    printf("Enter the elements : ");

    for(int i =0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    selectionSort(a,n);

    printf("Sorted array: ");
    printArray(a, n);

    return 0;
}