// Name : Subham Kar
// Date : 23/04/2026
// Problem : convert small>>Capital , Capital>>Small and make sentence case and toggle case of a string 
// NOte : toupper() , tolower() is used to convert [include ctype.h]

#include <stdio.h>
#include <ctype.h>

void main(){
    char str[200];
    int i;
    printf("Enter the string : ");
    fgets(str,sizeof(str),stdin);

    // UperCase
    printf("The UperCase is : "); 
    for(i=0;str[i];i++)
        printf("%c",toupper(str[i]));

    // Lower Case
    printf("The Lower case is : ");
    for(i=0;str[i];i++)
        printf("%c",tolower(str[i]));

    //Sentence case 
    printf("Sentence Case is : ");
    for(i=0;str[i];i++)
    {
        if(i==0)
            printf("%c",toupper(str[i]));
        else
            printf("%c",tolower(str[i]));
    }

    // Toggle Case 
    printf("Toggle Case : ");
    for(i=0;str[i];i++)
    {
        if(isupper(str[i]))
            printf("%c",tolower(str[i]));
        else if(islower(str[i]))
            printf("%c",toupper(str[i]));
        else 
            printf("%c",str[i]);
    }

}