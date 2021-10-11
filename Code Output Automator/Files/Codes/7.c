#include<stdio.h>
int array_size(char str[]){
    int len;
    for(len =0 ;str[len];len++);
    return len;
}
int substrFreq(char str[],char sub[]){
    int count = 0;
    int s1 = array_size(str);
    int s2 = array_size(sub);
  
    for(int i=0;i<=s1-s2;i++){
        int j;
        for(j=0;j<s2;j++){
            if(str[i+j] != sub[j]) break;
        }
        if(j == s2) count++;  
    }
    return count;
}

int main(){
    char str[]="codeandcodeandcodeancode";
    char sub[]="and";
    printf("%d",substrFreq(str,sub));
    return 0;
}