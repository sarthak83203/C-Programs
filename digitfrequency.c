//To find the frequency of the digit in an array.

#include<stdio.h>
int main(){
    int n,search,count=0;
    scanf("%d",&n);
    int arr[n];
    int *ptr=arr;

    for(int i=0;i<n;i++){
        scanf("%d",(ptr+i));
    }
    scanf("%d",&search);
    for(int i=0;i<n;i++){
        if(*(ptr+i)==search){
            count++;
        }
       
        
    }
    printf("%d %d",search,count);
    
   
    

}