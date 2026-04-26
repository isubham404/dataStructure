#include <stdio.h>
void main(){
    int a [100] ,l,r,key,mid,n,i;
    printf("Enter the range : ");
    scanf("%d",&n);

    printf("Enter the array : ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Enter the key to search : ");
    scanf("%d",&key);

    l = a[0];
    r = a[n-1];

    while(l<=r)
    {
        mid = (l+r)/2;
        if(a[mid] == key ){
            printf("The Key is found at %d\n",mid);
            break;
        }
        if(a[mid]<key)
            l = mid + 1;
        else if (a[mid]>key)
            r = mid-1;
    }

}