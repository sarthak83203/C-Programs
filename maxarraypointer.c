#include<stdio.h>
int main(){
    int n,max=0;
    scanf("%d",&n);
    int arr[n];
    int *ptr=arr;

    for(int i=0;i<n;i++){
        scanf("%d",(ptr+i));
    }

    for(int i=0;i<n;i++){
        if(*(ptr+i)>max){
            max=*(ptr+i);
        }

    }
    printf("Maximum value in array is: %d",max);

}