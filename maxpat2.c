#include <stdio.h>

int findMax(int arr[], int size) {
    int max=arr[0];
    for(int i=0;i<size;i++){
        if(max<arr[i]){
            max=arr[i];

        }

    }
    return max;
                                                   
}

int main() {
    int numbers[] = {12, 45, 23, 89, 56, 99, 78};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    
    printf("Maximum value: %d\n", findMax(numbers, size));
    return 0;
}
