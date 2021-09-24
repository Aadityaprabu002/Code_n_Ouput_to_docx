#include <stdio.h>
int main() {
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    int ASCII = ch;
    printf("The ASCII value is: %d",ASCII);
    return 0;
}