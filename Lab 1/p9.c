// Name : Subham Kar
// Date : 23/04/2026
// Problem : insert and delete from array
// NOte : use pointer to point the array size , then manipulate the size

#include <stdio.h>

void insert(int arr[], int *n, int pos, int val) {
    int i;
    for(i = *n; i > pos; i--)
        arr[i] = arr[i-1];

    arr[pos] = val;
    (*n)++;
}

void delete(int arr[], int *n, int pos) {
    int i;
    for(i = pos; i < *n-1; i++)
        arr[i] = arr[i+1];

    (*n)--;
}

int main() {
    int arr[100], n, i, pos, val, choice;

    printf("Enter size: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("1.Insert  2.Delete\n");
    scanf("%d", &choice);

    if(choice == 1) {
        printf("Position & value: ");
        scanf("%d %d", &pos, &val);
        insert(arr, &n, pos, val);
    } else {
        printf("Position to delete: ");
        scanf("%d", &pos);
        delete(arr, &n, pos);
    }

    printf("Array: ");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}