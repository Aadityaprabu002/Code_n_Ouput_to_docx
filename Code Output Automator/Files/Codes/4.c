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
int array_size(char str[]){
    int len;
    for(len =0 ;str[len];len++);
    return len;
}
int isSubstr(char str[],char sub[]){
    
    int s1 = array_size(str);
    int s2 = array_size(sub);
  
    for(int i=0;i<=s1-s2;i++){
        int j;
        for(j=0;j<s2;j++){
            if(str[i+j] != sub[j]) break;
        }
        if(j == s2) return i;  
    }
    return -1;
}
int deleteSubstr(char str[],char sub[]){
    int pos = isSubstr(str,sub);
    if(pos != -1){
       int s1 =array_size(str);
       int s2 = array_size(sub);
       int idx = 0;
       for(int i=0;i<pos;i++){
            str[idx++] = str[i];
       }
       for(int i=pos+s2;i<s1;i++){
            str[idx++] = str[i];
       }
       str[idx]='\0';
       return 1;
    }
    return 0;
}
int main(){
    char str[] = "aadityaprabu";
    char sub[]=  "yapra";

    deleteSubstr(str,sub);
    printf("%s",str);
    return 0;
}