#include<stdio.h>
int fibonacci(int arr[],int n);
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    fibonacci(arr,n);
   
    
}
int fibonacci(int arr[],int n){
    int fib[n];
    fib[0]=0;
    fib[1]=1;
    printf("%d\t%d\t",fib[0],fib[1]);
    for(int i=2;i<n;i++){
        fib[i]=fib[i-1]+fib[i-2];
        printf("%d\t",fib[i]);

    }
   
}