#include<stdio.h>
int main(){
    int n,sum=0;
    scanf("%d",&n);
    int array[n];
    
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
        sum=sum+array[i];
    }int max=array[0];
    int min=array[0];
    for(int i=0;i<n;i++){
        if(array[i]>max){
            max=array[i];
        }
        if(array[i]<min){
            min=array[i];
        }

    }

    printf("Total rainfall : %d\n",sum);
    printf("Average rainfall : %d\n",sum/n);
    printf("Highest rainfall month: %d \n",max);
    printf("Lowest rainfall month: %d \n",min);

    return 0;



}