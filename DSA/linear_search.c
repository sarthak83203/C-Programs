//Doing linear search  
#include<stdio.h>


int linearsearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int size=sizeof(arr)/sizeof(arr[0]);
    int key;
    scanf("%d",&key);
    int result=linearsearch(arr,size,key);
    printf("%d",result);
}