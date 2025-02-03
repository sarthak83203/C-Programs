// Copying an elements from one array to other.

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr1[n];
    int arr2[n];

    int *ptr=arr1;
    int *pttr=arr2;

    for(int i=0;i<n;i++){
        scanf("%d",(ptr+i));     
    }
    for(int i=0;i<n;i++){
        *(pttr+i)=*(ptr+i);
    }

    //Printing an copying array.

    for(int i=0;i<n;i++){
        printf("%d ",*(pttr+i));
    }
    return 0;

}