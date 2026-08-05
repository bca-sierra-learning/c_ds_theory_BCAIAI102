//C pgm to demo nested if else
// pgm to issue DL
#include<stdio.h>    //includes 'stdio.h' to this pgm
int main(){         //execution starts from here
 int age;
 int isIndian;      // 1-indian; 0- Non-indian
 int isTestCleared;  // 1 - cleared; 0-Not cleared
 int paidFee;
 printf("-----Welcome to DL-----");

//core logic to determine certificate can be issued or not
//nested if statement
 if(isIndian == 1){
  if(age>= 18){
    if(isTestCleared){
        if(paidFee == 500){
            printf("DL can be issed");
        }
    }

  }
}
}
