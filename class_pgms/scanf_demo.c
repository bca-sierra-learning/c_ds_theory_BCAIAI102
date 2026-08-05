//to demo scanf()
#include<stdio.h>
int main(){
    int firstnumber,seconnumber;
    printf("Enter the first number");
    scanf("%d",&firstnumber);
    printf("Enter the second number");
    scanf("%d",&seconnumber);
    int sum=firstnumber + seconnumber;
    printf("Sum is : %d", sum);
    
}