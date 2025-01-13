#include<stdio.h>
int main(){
    int n,num;
    scanf("%d",&n);
    int arr[n];
    int length=sizeof(arr);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&num);
    int temp=arr[0];
    for(int i=num;i>=1;i--){
        arr[i+1]=arr[i];
    }
    arr[length-1]=temp;
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}