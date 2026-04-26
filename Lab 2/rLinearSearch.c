#include <stdio.h>

int linearSearch(int a[], int n , int key , int i)
{
    //Base Case
    if(i==n)
        return -1;
    
    if(a[i] == key )
        return i;
    
    linearSearch(a,n,key,i+1);
}

void main(){
    int a[100] , n,i;
    printf("Enter the range : ");
    scanf("%d",&n);

    printf("Enter the array : ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    int key , flag =0;
    printf("Enter the key to search : ");
    scanf("%d",&key);

    int pos = linearSearch(a,n,key,0);

    if(pos!=-1)
        printf("The Key is found at position %d.\n",pos);
    else
        printf("The key is not found in the array :( ");
    
}