#include<stdio.h>
struct fibonacii{
    int n;
    int c,a,b;
};
int main(){
    struct fibonacii s1;
    scanf("%d",&s1.n);
    s1.a=0;
    s1.b=1;
    for(int i=2;i<s1.n-2;i++){
        s1.c=s1.a+s1.b;
        printf("%d ",s1.c);
        s1.a=s1.b;
        s1.b=s1.c;
    }
    return 0;
   

}