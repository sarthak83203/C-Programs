#include<stdio.h>
void frequencycount(int *arr,int m);
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    frequencycount(arr,n);
    return 0;


}
void frequencycount(int *ptr,int m){
   
    for(int i=0;i<m;i++){
        int count=0;
        for(int j=0;j<m;j++){
            if(*(ptr+i)==*(ptr+j)){
                count++;
            }
        }
        printf("Count of %d is %d\n",*(ptr+i),count);

    }
   
}