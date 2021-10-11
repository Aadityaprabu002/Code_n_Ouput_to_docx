#include<stdio.h>
int isPallindrome(char str[],size_t n){
    int p = 0;
    n--;
    int flag = 0;
    while(p<n){
        if(str[p]!=str[n]){
            flag = 1;
        }
        p--;
        n--;
    }
}
int main(){
    char str[100];
    printf("Enter a string:");
    scanf("%s",str);
    int n =sizeof(str);
    if(isPallindrome(str,n)){
        printf("Pallindrome");
    }
    else{
        printf("Not a Pallindrome");
    }
    
    
    return 0;
}