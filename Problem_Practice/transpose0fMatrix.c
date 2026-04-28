#include <stdio.h>
void main(){
    int i ,j, r,c;
    printf("Enter the number of row and coloumn of matrix : ");
    scanf("%d%d",&r,&c);
    int a[50][50];
    int t[50][50];

    printf("Enter the elements : ");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    // Transpose part 
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            t[j][i] = a[i][j];
        }
    }

    //Traversing the transpose matrix
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d ",t[i][j]);
        }
        printf("\n");
    }
}