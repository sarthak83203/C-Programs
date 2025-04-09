#include <stdio.h>

int main() {
    float a[3][3], co[3][3], adj[3][3], inv[3][3], det;

    // Input
    printf("Enter 3x3 matrix:\n");
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            scanf("%f", &a[i][j]);

    // Determinant
    det = a[0][0]*(a[1][1]*a[2][2] - a[1][2]*a[2][1])
        - a[0][1]*(a[1][0]*a[2][2] - a[1][2]*a[2][0])
        + a[0][2]*(a[1][0]*a[2][1] - a[1][1]*a[2][0]);

    if(det == 0) {
        printf("Inverse not possible. Determinant is 0.\n");
        return 0;
    }

    // Cofactors (manually)
    co[0][0] =  (a[1][1]*a[2][2] - a[1][2]*a[2][1]);
    co[0][1] = -(a[1][0]*a[2][2] - a[1][2]*a[2][0]);
    co[0][2] =  (a[1][0]*a[2][1] - a[1][1]*a[2][0]);

    co[1][0] = -(a[0][1]*a[2][2] - a[0][2]*a[2][1]);
    co[1][1] =  (a[0][0]*a[2][2] - a[0][2]*a[2][0]);
    co[1][2] = -(a[0][0]*a[2][1] - a[0][1]*a[2][0]);

    co[2][0] =  (a[0][1]*a[1][2] - a[0][2]*a[1][1]);
    co[2][1] = -(a[0][0]*a[1][2] - a[0][2]*a[1][0]);
    co[2][2] =  (a[0][0]*a[1][1] - a[0][1]*a[1][0]);

    // Transpose of cofactor matrix (adjoint)
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            adj[i][j] = co[j][i];

    // Inverse = adj / det
    printf("Inverse of the matrix is:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            inv[i][j] = adj[i][j] / det;
            printf("%.2f ", inv[i][j]);
        }
        printf("\n");
    }

    return 0;
}
