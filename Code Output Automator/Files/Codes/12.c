#include<stdio.h>
double series1(int n){
    double sum=0.0;
    for(int i=1;i<=n;i++){
        sum+=(double)i/((double)i+1.0);
    }
    return sum;
}
double series2(int n){
    double sum=0.0;
    for(int i=1;i<=n;i++){
        sum+=1.0/(double)i;
    }
    return sum;
}
int main() {
   int n;
   printf("Enter a number:");
   scanf("%d",&n);
   printf("Series 1:%Lf\n",series1(n));
   printf("Series 2:%Lf",series2(n));
}