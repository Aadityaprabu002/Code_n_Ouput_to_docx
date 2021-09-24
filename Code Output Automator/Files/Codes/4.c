#include <stdio.h>
int main() {
    float number = 9.23123132;
    printf("%.2f\n",number);
    printf("%.4f\n",number);
    printf("%.8f\n",number);
    double dnum = number;
    printf("%.4lf",dnum);
    return 0;
    
} 