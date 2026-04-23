// Name : Subham Kar
// Date : 23/04/2026
// Problem : Check for Palindrome
// NOte : check from middle if all the characters equidistant from mid are same then Palindrome (flag!=0) else not

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len, flag = 1;

    printf("Enter string: ");
    scanf("%s", str);

    len = strlen(str);

    for(i = 0; i < len/2; i++) {
        if(str[i] != str[len - i - 1]) {
            flag = 0;
            break;
        }
    }

    if(flag)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}