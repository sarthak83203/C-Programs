#include<stdio.h>
int main(){
    //Doing sorting
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    int left=0,right=n-1;
    while(left<=right){
        if(left==right){
            printf("%d",arr[left]);
        }else{
            printf("%d %d ",arr[left],arr[right]);
        }
        left++;
        right--;
    }
    return 0;

}