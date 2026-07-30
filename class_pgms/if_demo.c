#include<stdio.h>
int main(){
    int choice,firstnumber,secondnumber;
    printf("----welcome to my calculator-------");
    printf("1. Addition");
    printf("2. Subtraction");
    printf("3. Multiplication");
    printf("4. Division");
    printf("Enter your choice:");
    scanf("%d",&choice);
    if(choice == 1){
        //addition
        printf("Enter the first number :");
        scanf("%d",&firstnumber);
        printf("Enter the second number :");
        scanf("%d",&secondnumber);
        int sum=firstnumber + secondnumber;
        printf("The sum is : %d",sum);

    }
    if(choice == 2){
        //subtraction
        printf("Enter the first number :");
        scanf("%d",&firstnumber);
        printf("Enter the second number :");
        scanf("%d",&secondnumber);
        int diffeence=firstnumber - secondnumber;
        printf("The sum is : %d",diffeence);
    }
    if(choice == 3){
        //multiplication
    }
    if(choice == 4){
        //devision
    }
    printf("Program terminated.....");
    return 0;
}