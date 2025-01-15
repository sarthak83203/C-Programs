#include<stdio.h>
#include<math.h>

int calculatePower(int b,int e);
int main(){
    int b,e;
    scanf("%d",&b);
    scanf("%d",&e);
    if(b>=1 && b<=20 && e>=1 && e<=5){
        int result=calculatePower(b,e);
        printf("%d",result);
    }
    return 0;

}
int calculatePower(int b,int e){
    return (int)pow(b,e);

}