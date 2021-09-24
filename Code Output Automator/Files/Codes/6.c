#include <stdio.h>
#include<string.h>
#define DISCOUNT 5.0
void printBorder(char c,int fieldLength){
    for(int i=0;i<fieldLength;i++){
        printf("%c",c);
    }
    printf("\n");
}
void printBill(int n,char items[][100],int quantities[],double ppu[]){
    
    int fL = 53;
    double totalPrice = 0.0;
    printBorder('-',fL);
    printf("| %-20s %-20s %-8s|\n","Name","Quantity","Price");
    printBorder('-',fL);
    for(int i = 0;i<n;i++){
        double fairPrice = ppu[i]*quantities[i];
        totalPrice+=fairPrice;
        printf("| %-20s %d x %-16.2lf %-8.2lf|",items[i],quantities[i],ppu[i],fairPrice);
        printf("\n");
    }
    printBorder('-',fL);
    double disPrice = totalPrice - (totalPrice* DISCOUNT/100);
    double todaySavings = totalPrice - disPrice;
    printf("|%-32sSubtotal:%9.2lf |\n","",totalPrice);
    printf("|%-35sTotal:%9.2lf |\n","",disPrice);
    printf("|%-24sToday's Savings:%10.2lf |\n","",todaySavings);
    printBorder('-',fL);

}
int main() {
  char items[][100] = {
      {"orange"},
      {"tomato"},
      {"apple"}
  };
  double ppu[]={50.0,32.4,83.0};
  int quantities[] = {3,4,5};
  printBill(3,items,quantities,ppu);

}