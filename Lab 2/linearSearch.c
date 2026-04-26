#include <stdio.h>
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

    for(i=0;i<n;i++)
    {
        if(a[i] == key)
        {
            flag++;
            break;
        }
    }
    if(flag)
    {
        printf("The Key is present in the array at position %d.\n",i);
    }
    else {
        printf("The key is not present in the array :( ");
    }

}