#include<stdio.h>
int main(){
    int firstnumber,secondnumber,sum;
    // firstnumber=secondnumber=10;
    //secondnumber=20;
    printf("Enter the first number");
    scanf("%d",&firstnumber);
    printf("Enter the second number");
    scanf("%d",&secondnumber);
    sum=firstnumber + secondnumber;
    printf("The sum is : %d",sum);
    return 0;
}