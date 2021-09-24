#include<stdio.h>
int main() {

    char Z = '*'+'*'+ '*'%10 + '*'/10;
    printf("%c\n",Z);
    for(int i=0;i<10;i++)printf("*");
    printf("\n");
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(i+j == 10-1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    for(int i=0;i<10;i++)printf("*");
    printf("\n");
    return 0;
}