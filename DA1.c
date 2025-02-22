#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr1[n];
    int arr2[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%d",&arr2[i]);
    }
    for(int i=0;i<n;i++){
        if(arr2[i]==1){
            arr1[i]=arr1[i]*-1; //I updated in array itself.
        }else if(arr2[i]==0){
            arr1[i]=arr1[i]*1; //Same updated in array itself
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr1[i]);
    }
    return 0;
}