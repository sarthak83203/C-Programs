// Write a program in C to input a number and check if it is a Niven (Harshad) number or not using a function.

//The function should return 1 if the numbers is a Niven number else return 0.

//A Niven number is an integer number that is divisible by the sum of its digits.

//Example: 18 is a Niven number because the sum of its digit is 9 and 18 is divisible by 9.

#include<stdio.h>
int main(){
    int n,r,sum=0,e;
    int *ptr=&n;
   
    scanf("%d",ptr);
    int temp=*ptr;

    while(*ptr>0){
        r=*ptr%10;
        sum=sum+r;
        *ptr=*ptr/10;

    }
    if(temp%sum==0){
        printf("Niven number");
    }else{
        printf("No niven number");
    }
   
    return 0;


}