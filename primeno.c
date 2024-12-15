#include<stdio.h>
int main(){
    int n;
    int count=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count==2){
        printf("Yes");
    }else{
        printf("No");
    }
}