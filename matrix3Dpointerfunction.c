#include <stdio.h>

void printMatrix(int rows, int cols, int height, int matrix[rows][cols][height]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            for (int k = 0; k < height; k++) {
                printf("%d ", matrix[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
}

int main() {
    int rows, cols, height;
    int *ptr=&rows;
    int *pttr=&cols;
    int *ptttr=&height;

    // Get user input for the matrix dimensions
    printf("Enter the number of rows: ");
    scanf("%d", ptr);
    printf("Enter the number of columns: ");
    scanf("%d", pttr);
    printf("Enter the height (depth) of the matrix: ");
    scanf("%d", ptttr);

    // Declare the 3D matrix with pointer notation
    int matrix[*ptr][*pttr][*ptttr];

    // Get user input for the matrix values
    printf("Enter the values for the matrix:\n");
    for (int i = 0; i < *ptr; i++) {
        for (int j = 0; j < *pttr; j++) {
            for (int k = 0; k < *ptttr; k++) {
                printf("Enter value for matrix[%d][%d][%d]: ", i, j, k);
                scanf("%d", &matrix[i][j][k]);
            }
        }
    }

    // Print the matrix using pointers
    printMatrix(*ptr, *ptttr, *ptttr, matrix);
    
    return 0;
}