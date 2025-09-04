#include <stdio.h>

int main() {
    int arr[] = {4, 2, 1, 3, 2};
    int n = 5;

    int count[100] = {0};  // Assuming elements are less than 100

    // Count each element
    for(int i = 0; i < n; i++)
        count[arr[i]]++;

    // Print sorted elements
    for(int i = 0; i < 100; i++) {
        while(count[i]--)
            printf("%d ", i);
    }

    return 0;
}
