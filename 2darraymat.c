#include<stdio.h>
int main(){
    int m,n;      //m=rows and n=colums
    scanf("%d",&m);
    scanf("%d",&n);
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i%2==0){
                printf("%d ",arr[i][j]);
            }else{
                printf("%d ",arr[i][n-j-1]);
            }
        }
         printf("\n");
    }
   
    

}