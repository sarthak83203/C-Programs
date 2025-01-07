#include<stdio.h>
int main(){
    int n,w,count=0;
    scanf("%d",&n);
    scanf("%d",&w);
    for(int i=n;i<=w;i++){
        for(int j=0;j<=i;j++){
            if(i%j==0){
                count++;
            }     
        }
        if(count==2){
            printf("%d",i);
        }
    }
}