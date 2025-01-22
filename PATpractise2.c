#include<stdio.h>
int main(){
    int n,count1=0,count2=0;
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]%3==0){
            count1++;
        }else if(arr[i]%5==0){
            count2++;
        }
    }

    for(int i=0;i<n;i++){
        if(arr[i]%3==0 && arr[i]%5==0){
            arr[i]=-1;
        }
    }

   
    printf("%d %d\n",count1,count2);
     for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }



    return 0;

}