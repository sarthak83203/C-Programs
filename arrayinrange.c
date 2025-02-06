#include<stdio.h>
int main(){
    int n,mm,nn,count=0;
    scanf("%d",&n);
    //
    
    int arr[n];
    int *ptr=arr;

    for(int i=0;i<n;i++){
        scanf("%d",(ptr+i));
    }

    for(int i=0;i<n;i++){
        printf("%d ",*(ptr+i));
    }
    scanf("%d",&mm);
    scanf("%d",&nn);

    for(int i=mm;i<=nn;i++){
        count++;



    }
    printf("%d",count);
    return 0;

}