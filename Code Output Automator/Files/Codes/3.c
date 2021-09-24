#include <stdio.h>
#include<stdlib.h>
#include<string.h>
char* substring(const char* string,int start,int end)
{
    char *substr = (char*)malloc(sizeof(char) * end-start+1);
    int len=0;
    while(string[start]!='\0' && start<end ){
        *(substr+len) = string[start];
        start++;
        len++;
    }
    *(substr+len)='\0';
    return substr;
}
void centerPadding(const char* s,int fieldWidth){
    
    int padlen = (fieldWidth - strlen(s)) / 2;
    printf("%*s%s%*s\n",padlen,"",s,padlen,"");

}
int main() {  
    printf("%15s\n","leftpadding");
    centerPadding("center",15);
    printf("%-15s\n","rightpadding");
    char *substr = substring("samplestring",3,7);
    printf("%s",substr);
    return 0;
}
