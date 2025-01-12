#include<stdio.h>
int main(){
    int n,c,num=0;
    scanf("%d",&n);
    int a=1;
    int b=2;
    printf("%d  %d ",a,b);
    
    for(int i=3;i<=(2*n+1);i++){
        c=a+b;
        printf(" %d ",c);
        a=b;
        b=c;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=(2*i);j++){
            if(i%j==0){
                num++;
            }

        }
        if(num==2){
            printf("%d",i);
        }
    }
     
}