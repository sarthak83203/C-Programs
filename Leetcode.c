#include<stdio.h>
void print(int *arr,int n);
int main(){
    int n;
    printf("Enter How many nunber you want to enter: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    print(arr,n);
    return 0;

}
void print(int *arr,int m){
    for(int i=0;i<m-1;i+=2){ // i+2 is there bcz if we swap 2 elements then we move to next two elements to swap.
        int temp=*(arr+i);
        *(arr+i)=*(arr+i+1);
        *(arr+i+1)=temp;
    }
    printf("Result after Swaping is : ");
    for(int i=0;i<m;i++){
        printf("%d ",*(arr+i));
    }
   


}