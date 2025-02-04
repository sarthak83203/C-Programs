//Two array are given we have to merge

#include<stdio.h>
int main(){
    int n,m;
    scanf("%d",&n);
    scanf("%d",&m);
    int arr1[n];
    int arr2[m];
    int merged[n+m];
    int *ptr=arr1;
    int *pttr=arr2;
    int *ptttr=merged;

    for(int i=0;i<n;i++){
        scanf("%d",(ptr+i));
    }
    for(int i=0;i<m;i++){
        scanf("%d",(pttr+i));
    }
    
    for(int i=0;i<n;i++){
        *(ptttr+i)=*(ptr+i);

    }
    for(int i=0;i<m;i++){
        *(ptttr+i+n)=*(pttr+i);
    }

    for(int i=0;i<m+n;i++){
        printf("%d ",*(ptttr+i));

    }
    return 0;


}