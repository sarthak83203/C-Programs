//Do binary Search.
#include<stdio.h>
int binarysearch(int arr[],int n,int key){
    int s=0;
    int e=n;
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]>key){
           return  mid-1;
        }else if(arr[mid]==key){
            return mid;
        }else if(arr[mid]<key){
            return mid+1;
        }

    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int key;
    scanf("%d",&key);
   int result= binarysearch(arr,n,key);
   printf("%d",result);


}