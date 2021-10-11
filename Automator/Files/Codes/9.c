#include<stdio.h>
#include<string.h>
int main(){
    int n=10;
    char abb[10][10];
    for(int i=0;i<10;i++){
        char name[100];
        fgets(name,sizeof(name),stdin);
        name[strcspn(name,"\n")] = '\0';
        char space[] = " ";
        char* token = strtok(name,space);
        int j=0;
        while(token!=NULL){
            abb[i][j++] = token[0];
            token = strtok(NULL,space);
        }  
        abb[i][j]='\0'; 
        printf("\n");
    }
    printf("[ ");
    for(int i=0;i<10;i++){
        printf("%s, ",abb[i]);
    }
    printf("]");
    return 0;
}