#include<stdio.h>
int main(){
    int mat1[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int mat2[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int sum = 0;
    for(int i=0;i<3;i++){
        sum+=mat1[i][i];
        sum+=mat1[i][3-1-i];
        sum+=mat2[i][i];
        sum+=mat2[i][3-1-i];
    }
    sum-= mat1[3/2][3/2];
    sum-= mat2[3/2][3/2];

    printf("Sum of two diags of two matrix is :%d",sum);
  return 0;   
}