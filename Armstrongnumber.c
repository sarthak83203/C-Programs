#include<stdio.h>
int main(){
    int n,r,sum=0;
    scanf("%d",&n);
    int m=n;

    //Now checking Armstrong number

    while(n>0){
        r=n%10;
        sum=sum+r*r*r;    //If i want to reverse number then sum*10 should be there.
        n=n/10;
    }

    if(m==sum){                            // Checking if its an armstrong or not
        printf("Yes its an Armstrong Number");    
    }else{
        printf("No its not an armstrong number");
    }
    return 0;

}