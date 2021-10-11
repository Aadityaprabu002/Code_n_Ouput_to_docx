#include<string.h>
#include<stdio.h>

int main(){
    char listOfstrings[][20] = {"Ball", "Apple", "Cat"};
    int n = sizeof(listOfstrings)/sizeof(listOfstrings[0]);
    for(int i=0;i<n;i++){
        printf("%s ",listOfstrings[i]);
    }
    printf("\n");
    for(int i=0;i<n-1;i++){
        char temp[20];
        int pos;
        strcpy(temp,listOfstrings[i]);
        for(int j=i+1;j<n;j++){
            if(strcmp(temp,listOfstrings[j])>0){
                strcpy(temp,listOfstrings[j]);
                pos = j;
            }
        }
        strcpy(temp,listOfstrings[i]);
        strcpy(listOfstrings[i],listOfstrings[pos]);
        strcpy(listOfstrings[pos],temp);
    }
    for(int i=0;i<n;i++){
        printf("%s ",listOfstrings[i]);
    }
    return 0;
}