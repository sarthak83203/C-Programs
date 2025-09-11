#include<stdio.h>
int count=0;
void hanoi(int n,char from,char to,char aux){
    
    if(n==0){
        return;
    }
    hanoi(n-1,from,aux,to);
    count++;
    hanoi(n-1,aux,to,from);
}




int main(){
    int n;
    scanf("%d",&n);
    hanoi(n,'A','C','B');
    printf("%d",count);

}