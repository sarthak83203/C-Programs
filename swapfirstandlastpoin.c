// Question is to swap the first and last elements in array.

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int *ptr=arr;

    for(int i=0;i<n;i++){
        scanf("%d",(ptr+i));
    }

    if(n>0){
        int temp=*ptr;
        *ptr=*(ptr+n-1);
        *(ptr+n-1)=temp;
    }

    

    for(int i=0;i<n;i++){
        printf("%d ",*(ptr+i));
    }

    return 0;
}