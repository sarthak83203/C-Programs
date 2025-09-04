#include <stdio.h>

int iteration = 1;

void printarray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int partition(int arr[], int low, int high) {
    int pivot = arr[low];
    int i = low + 1;
    int j = high;
    int temp;

    do {
        while (i <= high && arr[i] <= pivot) {
            i++;
        }
        while (arr[j] > pivot) {
            j--;
        }
        if (i < j) {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    } while (i < j);

    // Swap pivot into correct place
    temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;

    return j;
}

void quicksort(int arr[], int low, int high, int n) {
    if (low < high) {
        int partitionindex = partition(arr, low, high);

        printf("Iteration %d: ", iteration++);
        printarray(arr, n);

        quicksort(arr, low, partitionindex - 1, n);
        quicksort(arr, partitionindex + 1, high, n);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Initial: ");
    printarray(arr, n);

    quicksort(arr, 0, n - 1, n);

    printf("Sorted: ");
    printarray(arr, n);

    return 0;
}
