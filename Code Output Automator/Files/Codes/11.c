#include<stdio.h>
int gcd(int a,int b){
    if(b == 0) return a;
    return gcd(b,a%b);
}
int main(){
    int a = 56;
    int b = 24;
    printf("GCD:%d\n",gcd(a,b));
    printf("LCM:%d",a*b/gcd(a,b));
    return 0;
}