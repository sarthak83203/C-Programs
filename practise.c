#include<stdio.h>
int main(){
    int n,r,sum=0;
    scanf("%d",&n);
    int m=n;
    while(n>0){
        r=n%10;
        sum=sum+r*r*r;
        n=n/10;
    }
    if(sum==m){
        printf("Yes it matches\n");

    }else{
        printf("No it not matches\n");
    }
    printf("%d",sum);
    return 0;
}