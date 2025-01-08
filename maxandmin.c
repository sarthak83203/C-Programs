#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    int max=array[0];
    int min=array[0];
    for(int i=1;i<n;i++){
        if(array[i]>max){
            max=array[i];
        }
        if(array[i]<min){
            min=array[i];
        }
    }
    printf(" max value is: %d \n",max);
    printf(" min value is : %d ",min);
}