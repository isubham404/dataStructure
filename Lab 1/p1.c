// Name : Subham Kar
// Date : 23/04/2026
// Problem : Find the Sum of all digits in an Array and mean and standard_deviation too.. 
// NOte : sd = sumation of [sqrt(((array[i]-mean)^2)/n)]

#include <stdio.h>
#include <math.h>
int main(){
    int a[100] , i,n;
    float sum=0 , mean,stdDev = 0;
    printf("Enter the number of elements : ");
    scanf("%d",&n);

    printf("Enter the values one by one : ");

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }

    mean = sum/n;

    for(i=0;i<n;i++)
    {
        stdDev += pow(a[i]-mean,2);
    }
    
    stdDev = sqrt(stdDev/n);

    printf("The sum of all the numbers in the array is : %f\nThe Mean of the array is : %f\nThe Standard Deviation of the array is : %f\n ",sum,mean,stdDev);
}