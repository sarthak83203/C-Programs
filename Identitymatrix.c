#include<stdio.h>
void identity_2d(int rows,int cols,int arr[rows][cols]);

int main(){
    int rows,cols;
    scanf("%d",&rows);
    scanf("%d",&cols);
    int arr[rows][cols];
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    
    identity_2d(rows,cols,arr);
    return 0;

}
void identity_2d(int rows,int cols,int arr[rows][cols]){

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(i==j){
                arr[i][j]=1;
            }else if(i!=j){
                arr[i][j]=0;
            }
        }

    }


    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    
    

}
