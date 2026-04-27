#include <stdio.h>
void main(){
    int i , n;
    printf("Enter the size of the array : ");
    scanf("%d",&n);

    double a[n];
    printf("Enter the elments for the array : ");
    for(i=0;i<n;i++)
        scanf("%lf",&a[i]);
    
    // Bubble Sorting !!
    double temp ;
    for(i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            double f1 = a[j] - (int)a[j];
            double f2 = a[j+1] -(int)a[j+1];

            if(f1>f2)
            {
                temp = a[j];
                a[j]=a[j+1];
                a[j+1] = temp;
            }
        }
    }

    printf("The array after sorting by the fractional part is : \n");
    for(i=0;i<n;i++)
        printf("%.2lf ",a[i]);
    
}