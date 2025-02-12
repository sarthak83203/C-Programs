#include<stdio.h>
void printtheelement(int *arr,int m);
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printtheelement(arr,n);
    return 0;


}
void printtheelement(int *ptr,int m){
    int u,yu;
    scanf("%d",&u);
    for(int i=0;i<m;i++){
        yu=*(ptr+i);
    }
    if(u==yu){
        printf("Yes,the element found in the given array");
    }else{
        printf("1");

    }


}