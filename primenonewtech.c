#include<stdio.h>
int main(){
    int n,m;
    scanf("%d",&n);
    scanf("%d",&m);
    for(int i=n;i<m;i++){
        int count=0;
        for(int j=1;j<=i;j++){
            if(i%j==0){
                count++;
            } 
        }
        if(count==2){
            printf("%d ",i);
        }
    }
    printf("\n");
    return 0;

}