#include <stdio.h>

int binarySearch(int a[], int low, int high, int key)
{
    if(low > high)
        return -1;

    int mid = (low + high) / 2;

    if(a[mid] == key)
        return mid;
    else if(key < a[mid])
        return binarySearch(a, low, mid-1, key);
    else
        return binarySearch(a, mid+1, high, key);
}

void main(){
    int a [100] ,l,r,key,mid,n,i;
    printf("Enter the range : ");
    scanf("%d",&n);

    printf("Enter the array : ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Enter the key to search : ");
    scanf("%d",&key);

    int pos = binarySearch(a,0,n-1,key);
    if(pos!=-1)
        printf("The key is found at %d\n",pos);
    else
        printf("The Key is not found..");
    
}