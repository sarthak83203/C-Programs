#include<stdio.h>
int main(){
    int n,pos;
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
        
    }
    scanf("%d",&pos);
    pos--;
    
    for(int i=0;i<n;i++){
        if(i!=pos){
             printf("%d ",array[i]);

        }
       
    }

}