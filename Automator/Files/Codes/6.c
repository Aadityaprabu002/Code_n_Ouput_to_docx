#include<stdio.h>

size_t size(char str[]){
    int len = 0;
    for(len=0;str[len];len++);
    return len;
}
int main(){
    char str1[]="rtx";
    char str2[]="gigabyte";
    int n = size(str1);
    int m = size(str2);
    char str3[n+m];
    int k = 0;
    for(int i=0;str1[i];i++) {
        str3[k++] = str1[i];
    }
    for(int i=0;str2[i];i++) {
        str3[k++] = str2[i];
    }
    printf("%s",str3);

    return 0;
}