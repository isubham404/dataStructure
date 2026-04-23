// Name : Subham Kar
// Date : 23/04/2026
// Problem : String Concatination
// NOte : strcat() is used for concat

#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100];

    printf("Enter first string: ");
    scanf("%s", s1);

    printf("Enter second string: ");
    scanf("%s", s2);

    strcat(s1, s2);

    printf("Result = %s", s1);

    return 0;
}