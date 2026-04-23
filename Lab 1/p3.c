// Name : Subham Kar
// Date : 23/04/2026
// Problem : Count the total number of capital , small alphabets and number of digits in a string
// NOte : isupper(),islower(),isdigit() used  is used for comparing 

#include <stdio.h>
#include <ctype.h>
void main(){
    int cap=0 , small=0 ,digit=0,spl=0;
    char str[200];
    printf("Enter the String : ");
    scanf("%s",str);

    for(int i=0;str[i]!='\0';i++){
        if(isupper(str[i]))
            cap++;
        if(islower(str[i]))
            small++;
        if(isdigit(str[i]))
            digit++;
        if(isalnum(str[i]))
            spl++;
    }

    printf("Total Number of capital letters : %d\nTotal number of small letters : %d\nTotal number of digits : %d\nTotal number of Special Characters : ",cap,small,digit,spl);
}