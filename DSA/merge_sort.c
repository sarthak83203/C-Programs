#include<stdio.h>


void printarray(int arr[],int n){

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}

void merge(int arr[],int low,int mid,int high){
    int i;
    int j;
    int k;

    int B[100];
    i=low;
    j=mid+1;
    k=low;//K is our new Array
    while(i<=mid && j<=high){
        if(arr[i]<arr[j]){
            B[k]=arr[i];
            i++;
            k++;
        }else{
            B[k]=arr[j];
            j++;
            k++;
        }
    }
    while(i<=mid){ //copy of upper loop.
        B[k]=arr[i];
        i++;
        k++;
    }
    while(j<=high){ //copy of upper loop.
        B[k]=arr[j];
        j++;
        k++;
    }
    for(int i=low;i<=high;i++){
        arr[i]=B[i];

    }
}
void mergesort(int arr[],int low,int high){
    int mid;
    if(low<high){
        mid=(low+high)/2;
        mergesort(arr,low,mid);
        mergesort(arr,mid+1,high);
        merge(arr,low,mid,high);
        
    }

}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    mergesort(arr,0,n-1);
    printarray(arr,n);


}