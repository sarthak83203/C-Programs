#include<stdio.h>
void Divisors(int *n);
int main(){
    int m;
    scanf("%d",&m);
    Divisors(&m);

}
void Divisors(int *n){
    int sum=0;

    for(int i=1;i<*n;i++){
        if(*n%i==0){
           
            sum=sum+i;
        }
    }
    printf("%d",sum);
}