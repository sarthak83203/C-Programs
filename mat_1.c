#include<stdio.h>
int main(){
    int n,r;
   
    scanf("%d",&n);
    int length=sizeof(n);
    while(n>0){
        int count=0;
        r=n%10;
        for(int i=1;i<=r;i++){
            if(r%i==0){
                count++;
            }
        }
        if(count==2){
            printf("%d ",r);
        }
        n=n/10;
    }
    return 0;

}
