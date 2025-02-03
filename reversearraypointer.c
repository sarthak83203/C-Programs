#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int *ptr=arr;

    for(int i=0;i<n;i++){
        scanf("%d",(ptr+i));
    }

    for(int i=0;i<n/2;i++){
        int first=*(ptr+i);
        int second=*(ptr+n-i-1);
        *(ptr+n-i-1)=first;
        *(ptr+i)=second;   
    }

    for(int i=0;i<n;i++){
        printf("%d ",*(ptr+i));
    }

    return 0;
}