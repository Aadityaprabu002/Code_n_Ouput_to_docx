#include <stdio.h>
#include<math.h>
int main()
{
    int i,n,c=0;
    printf ("Enter a number n:");
    scanf ("%d",&n);
    if(n==2){
        c =0;
    }
    else if(n%2==0){
        c = 1;
    }
    else{
        for (i=3;i<=(int)sqrt(n);i+=2){
            if(n%i==0){
                c=1;
                break;
            }
                    
        }
    }
    if (c==0) printf ("The number is PRIME");
    else printf ("The number is COMPOSITE");
    return 0;
} 
