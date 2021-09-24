#include<stdio.h>
#include<ctype.h>
int main() {   
    char ch;
    printf("Enter a character: ");  
    scanf("%c", &ch);
    printf("Lower case: %c",tolower(ch));
    return 0;
}