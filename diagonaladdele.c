// Create an 2D array and then add Diagonal elements in that array using pointers

#include<stdio.h>
int main(){
    int n,m,sum=0;
    scanf("%d",&n);
    scanf("%d",&m);
    int arr[n][m];
    int (*ptr)[m]=arr;  // after pointer we have to write an coloums. 

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",(*(ptr+i)+j));
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i==j){
                sum=sum+*(*(ptr+i)+j);
            }          
        }    
    }
    printf("%d",sum);
    return 0;



}