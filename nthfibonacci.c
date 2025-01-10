#include<stdio.h>
int main(){
    int n,c;
    scanf("%d",&n);
    int a=1;
    int b=2;
    
    for(int i=3;i<=n;i++){
        c=a+b;
       

        a=b;
        b=c;


    }
     printf("%d ",c);
}