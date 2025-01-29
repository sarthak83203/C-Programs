#include<stdio.h>
int main(){
    int n,r,sum=0,product=1;
    scanf("%d",&n);
    int m=n;

    while(n>0){
        r=n%10;
        sum=sum+r;
        product=product*r;
        n=n/10;
    }
    if((sum+product)==m){
        printf("Yes its a Special Number");
    }else{
        printf("Error. Please enter the other number");
    }
    return 0;
  

}