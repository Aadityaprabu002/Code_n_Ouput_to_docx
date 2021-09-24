#include<stdio.h>
struct DATE
{
    int dd,mm,yyyy;
};
struct DATE getAge(struct DATE dob,struct DATE curr){
   
    int month[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if(dob.dd>curr.dd){
        curr.dd = curr.dd + month[dob.mm-1];
        curr.mm = curr.mm - 1;
    }
    else if(dob.mm>curr.mm){
        curr.yyyy-=1;
        curr.mm+=12;
    }
    struct DATE age;
    age.dd = curr.dd - dob.dd;
    age.mm = curr.mm - dob.mm;
    age.yyyy = curr.yyyy - dob.yyyy;
    return age;
}
int main(){
    struct DATE dob,curr;
    printf("Enter Date of Birth:");
    scanf("%d%d%d",&dob.dd,&dob.mm,&dob.yyyy);
    printf("Enter Current Date:");
    scanf("%d%d%d",&curr.dd,&curr.mm,&curr.yyyy);
    struct DATE age = getAge(dob,curr);
    printf("%d/%d/%d",age.dd,age.mm,age.yyyy);
    return 0;





    
}