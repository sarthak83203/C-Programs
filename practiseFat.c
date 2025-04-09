//print the prime number in specific range
#include<stdio.h>
void prime(int s1,int s2){
    
    for(int i=s1;i<=s2;i++){
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

}
int main(){
    int n,m;
    scanf("%d",&n);
    scanf("%d",&m);
    prime(n,m);
    return 0;
}