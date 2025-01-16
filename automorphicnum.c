#include<stdio.h>
#include<math.h>
int isAutomorphic(int n);
int main(){
    int n;
    scanf("%d",&n);
    isAutomorphic(n);
    return 0;
    
    
        
    }
    

int isAutomorphic(int n){
    int w,r;
    
    if(n>=1 && n<=100){
        
        w=(int)pow(n,2);
        r=w%10;
    }
    
    if(r==n){
        printf("The number is an automorphic.");
    }else if(r!=n) {
        printf("The number is NOT an automorphic.");
    }
    return 0;

}
