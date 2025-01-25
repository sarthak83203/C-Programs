// How to add the elements in the end of the array

#include<stdio.h>
int main(){
    int n,newnumber;
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int *ptr=arr;
    scanf("%d",&newnumber);

    *(ptr+n)=newnumber;
    n++;
    
    

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;

}