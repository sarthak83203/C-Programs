#include<stdio.h>
int main(){
    int n,m;
    scanf("%d",&m);
    scanf("%d",&n);
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    //Now print the sum of the rows in a matrix
 
    for(int i=0;i<m;i++){
           int sum=0;
        for(int j=0;j<n;j++){
            sum=sum+arr[i][j];
            
        }
        printf("Sum of the %d is: %d\n",i,sum);
    }

}