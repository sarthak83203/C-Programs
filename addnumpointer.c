//Add Two number using pointer 
#include<stdio.h>
int main(){
    int n,m,add;
    int *ptr=&n;
    int *pttr=&m;
    scanf("%d",ptr);
    scanf("%d",pttr);

    add =*ptr+*pttr;
    printf("%d",add);

    return 0;



}