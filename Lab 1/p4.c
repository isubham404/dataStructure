// Name : Subham Kar
// Date : 23/04/2026
// Problem : Compare two strings if same or not 
// NOte : strcmp() is used for comparing 

#include <stdio.h>
#include <string.h>
void main(){
    char str1[200] , str2[200];
    printf("Enter the string 1 : ");
    scanf("%s",&str1);
    printf("Enter the second string : ");
    scanf("%s",&str2);
    if(strcmp(str1,str2)==0)
    {
        printf("Two Strings are same !!");
    }
    else
        printf("Two strings are not same !!");
}