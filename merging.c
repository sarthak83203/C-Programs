#include<stdio.h>
int main(){
    int n,w,i,j,k;
    scanf("%d",&n);
    int arr1[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
    scanf("%d",&w);
    int arr2[w];
    for(int i=0;i<w;i++){
        scanf("%d",&arr2[i]);
    }
    int merge[n+w];
    i=0;
    j=0;
    k=0;
    while(i<n && j<w){
        if(arr1[i]<=arr2[i]){
            merge[k++]=arr1[i++];

        }
        else{
            merge[k++]=arr2[j++];
        }
    }
    while(i<n){
        merge[k++]=arr1[i++];

    }
    while(j<w){
         merge[k++]=arr2[j++];

    }
    for(int i=0;i<(n+w);i++){
        printf("%d ",merge[i]);
    }
}