//insertion sort
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
        for(int k=0;k<n;k++){
            printf("%d ",arr[k]);

        }
        printf("\n");
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]); 
    }
}