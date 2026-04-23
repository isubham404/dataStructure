// Name : Subham Kar
// Date : 23/04/2026
// Problem : Find the max and Next max in an array 
// NOte : set max to the smallest and compare with the array elements , then swap 

#include <stdio.h>
int main(){
    int i , n ;
    printf("Enter the size of the array : ");
    scanf("%d",&n);

    double a[n] , max , nextMax ;

    printf("Enter the values : ");
    for(i=0;i<n;i++)
        scanf("%lf",&a[i]);

    max = nextMax = -1e9;
    for(i=0;i<n;i++)
    {
        if(a[i] > max){
            nextMax = max ;
            max = a[i];
        }
        else if (a[i] > nextMax && a[i] != max)
            nextMax = a[i];
    }

    printf("Maximum Value is :%.2lf\nNext Maximum is : %.2lf",max,nextMax);
}