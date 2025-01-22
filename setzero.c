#include<stdio.h>
int main(){
    int m,n;
    scanf("%d",&m);
    scanf("%d",&n);
    int arr[m][n];

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){
            if(arr[i][j]==0){
                printf("0");

            }else{
                printf("%d",arr[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}