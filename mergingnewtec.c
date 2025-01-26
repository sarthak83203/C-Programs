#include<stdio.h>
int main(){
    int n1,n2;
    scanf("%d",&n1);
    scanf("%d",&n2);
    int arr1[n1];
    int arr2[n2];
    int merged[n1+n2];
    int resultant[n1+n2];

    for(int i=0;i<n1;i++){
        scanf("%d ",&arr1[i]);

    }
    for(int i=0;i<n2;i++){
        scanf("%d ",&arr2[i]);
    }
    for(int i=0;i<n1;i++){
        merged[i]=arr1[i];
    }
    for(int i=0;i<n2;i++){
        merged[n1+i]=arr2[i];
    }
   

    for(int i=0;i<n1+n2;i++){
        printf("%d ",merged[i]);
    }

     for(int i=0;i<n1+n2;i++){
        scanf("%d ",&resultant[i]);
    }


    for(int i=0;i<n2/2;i++){
        int first=arr2[i];
        int second =arr2[n2-i-1];
        arr2[i]=second;
        arr2[n2-i-1]=first;
    }
    for(int i=0;i<n1;i++){
        resultant[i]=arr1[i];
    }
    for(int i=0;i<n2;i++){
        resultant[n1+i]=arr2[i];
    }
    for(int i=0;i<n1+n2;i++){
        printf("%d ",resultant[i]);
    }


    return 0;




  
}