#include<stdio.h>
int main(){
    char str[30];
    int n;
    printf("\nEnter a number length to extract:");
    scanf("%d",&n);

    printf("\nEnter a string:");
    scanf("%s",str);
    
    printf("\n%.*s",n,str);
    return 0;
}