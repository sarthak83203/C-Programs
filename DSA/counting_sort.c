#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    int count[max+1];
    //Count is equal to zero.
    for(int i=0;i<=max;i++){
        count[i]=0;

    }
    //Now increseing the count value.
    for(int i=0;i<n;i++){
        count[arr[i]]++;
    }
    //Now storing in originla value.
    int index=0;
    for(int i=0;i<=max;i++){
        while(count[i]>0){
            arr[index++]=i;
            count[i]--;
        }
    

    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

}