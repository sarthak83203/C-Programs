#include<stdio.h>
int main(){
    int n,num;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&num);
    for(int i=num;i>=1;i--){
        arr[i]=arr[i-1];
       
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }


}