#include<stdio.h>
int main(){
    int n,m;
    scanf("%d%d",&n,&m);

    while(n!=0 && m!=0){
        if(n>m){
            n=n%m;
        }else if(m>n){
            m=m%n;
        }
    }
    if(m+n==1){
        printf("Yes it an co-prime number");
    }else{
        printf("No it not an co prime number");
    }
    return 0;



}