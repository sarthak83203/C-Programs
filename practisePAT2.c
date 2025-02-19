#include <stdio.h>
#include <stdlib.h>

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int size = 5;
    int *arr = (int *)malloc(size * sizeof(int));

    for (int i = 0; i < size; i++) {
        arr[i] = i + 1;
    }

    printArray(arr, size);

    free(arr); // Free allocated memory
    return 0;
}
