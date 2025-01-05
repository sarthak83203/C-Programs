#include<stdio.h>
void Table(int n){
    
    for(int i=0;i<=10;i++){
        printf("%d X %d = %d \n",n,i,n*i);


    }
}
int main(){
    int w;
    scanf("%d",&w);
    Table(w);
    return 0;
}





