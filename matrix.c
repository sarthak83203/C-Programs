#include<stdio.h>
void display(int rows,int cols,int arr[rows][cols]){ // this is the method to take input for function in  matrix.......
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }


}
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
    display(rows,cols,arr);//Remember the array name is only mentioned.
}