#include<stdio.h>
#include<math.h>
int octalToDecimal(int lo){
    int rmd = lo%10;
    int power = 0;
    int decimal=0;

    while(lo){
        decimal+=rmd*(int)pow(8,power);
        power++;
        lo/=10;
        rmd = lo%10;
    }
    return decimal;
    
}

int hexaToDecimal(int lo){
    int rmd = lo%10;
    int power = 0;
    int decimal=0;
 
    while(lo){
        decimal+=rmd*(int)pow(16,power);
        power++;
        lo/=10;
        rmd = lo%10;
       
    }
    return decimal;
    
}
int main() {
   
    int number;
    printf("Enter a number:");
    scanf("%d",&number);

    printf("Octal to Decimal value:%d\n",octalToDecimal(number));
    printf("Hexa to Decimal value:%d",hexaToDecimal(number));
    return 0;
}
