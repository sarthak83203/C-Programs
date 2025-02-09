// You are given with 2D matrix you have to sort row by row and take the transpose then print it.Using(function,pointers).

#include<stdio.h>
void printmatrix(int m,int n,int (*p)[m]);
int main(){
    int n,m;
    scanf("%d",&n);
    scanf("%d",&m);
    int arr[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        } 
    }
    printmatrix(m,n,arr);
    return 0;
}

void printmatrix(int m,int n,int (*p)[m]){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           printf("%d ",p[i][j]);
        }
        printf("\n"); 
    }

    


}