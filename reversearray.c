#include<stdio.h>
int reversearray(int arr[],int n);
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
    reversearray(arr,n);


}
int reversearray(int arr[],int n){
    for(int i=0;i<n/2;i++){
        int first =arr[i];
        int second=arr[n-i-1];
        arr[i]=first;
        arr[n-i-1]=second;

    }
}