#include<stdio.h>
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}





 int  partition(int arr[],int low,int high){
    int temp;
    int pivot=arr[low];
    int i=low+1;
    int j=high;
    do{

    
    while(arr[i]<=pivot){
        i++;
    }
    while(arr[j]>pivot){
        j--;
    }
    //Now favourite swaping part
    if(i<j){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    }while(i<j);
    temp=arr[low]; //Now low and j ko swap karo
    arr[low]=arr[j];
    arr[j]=temp;

    return j;//Remeber................

}

void quicksort(int arr[],int low,int high){
    int partitionindex;
    if(low<high){
    partitionindex=partition(arr,low,high);
    quicksort(arr,low,partitionindex-1);
    quicksort(arr,partitionindex+1,high);
    }

}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    quicksort(arr,0,n-1);
    printarray(arr,n);

}