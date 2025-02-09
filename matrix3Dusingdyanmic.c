//Do Dyanamic memory allocation of 3D matrix using formulas,

#include<stdio.h>
#include<stdlib.h>

int main(){
    int rows,cols,height,sum=0;
    scanf("%d %d %d",&rows,&cols,&height);

    int *matrix=(int *)malloc(rows * cols * height * sizeof(int));

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            for(int k=0;k<height;k++){
                scanf("%d",&matrix[i * cols * height+j * height+k]);
            }
        }
    }

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            for(int k=0;k<height;k++){
                sum=sum+matrix[i * cols * height+j * height+k];
            }
            printf("\n");
        }
        printf("\n");
    }
    printf("%d",sum);

}

