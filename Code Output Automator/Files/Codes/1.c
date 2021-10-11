#include<stdio.h>
void substr(char str[],char substring[],int start,int end){
    int pos = 0;
    while(start >= 0 && *(str+start) && start < end){
        substring[pos] = *(str+start);
        pos++;
        start++; 
    }
    substring[pos]='\0';
    
}
int main()
{
    char str[]="aadityaprabu\0";
    char subst[10];
    substr(str,subst,2,8);
    printf("%s",subst);
    substr(str,subst,0,8);
    printf("\n%s",subst);
    substr(str,subst,6,8);
    printf("\n%s",subst);
    return 0;
}