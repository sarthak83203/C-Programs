



/*Given an array of integers, count the number of smaller elements that appear to the right of each element. Implement a solution using merge sort to count these elements efficiently. Output the result as an array of counts corresponding to each element in the original array.



Example

Input:

4

5 2 6 1



Output: 

2 1 1 0 



﻿Explanation:

To the right of 5, there are 2 smaller elements (2 and 1).

To the right of 2, there is only 1 smaller element (1).

To the right of 6, there is 1 smaller element (1).

To the right of 1, there is 0 smaller element.

Input format :
The first line of input contains a single integer n, representing the length of the array.

The second line contains n space-separated integers, representing the elements of the array.

Output format :
The output prints a single line containing the counts of smaller elements for each value in the array, separated by a space.



Refer to the sample output for formatting specifications.

Code constraints :
The given test cases fall under the following specifications:

1 ≤ n ≤ 20

-100 ≤ elements ≤ 100

Sample test cases :
Input 1 :
4
5 2 6 1
Output 1 :
2 1 1 0 
Input 2 :
2
-1 -1
Output 2 :
0 0 
Note :
*/
#include <stdio.h>

typedef struct {
    int value;
    int index;
} Element;

void merge(Element arr[], int counts[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    Element L[n1], R[n2];
    for (int i = 0; i < n1; i++) L[i] = arr[left + i];
    for (int j = 0; j < n2; j++) R[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;
    int rightCount = 0; // number of smaller elements from right side

    while (i < n1 && j < n2) {
        if (L[i].value <= R[j].value) {
            counts[L[i].index] += rightCount;
            arr[k++] = L[i++];
        } else {
            rightCount++;
            arr[k++] = R[j++];
        }
    }

    while (i < n1) {
        counts[L[i].index] += rightCount;
        arr[k++] = L[i++];
    }
    while (j < n2) {
        arr[k++] = R[j++];
    }
}

void mergeSort(Element arr[], int counts[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(arr, counts, left, mid);
        mergeSort(arr, counts, mid + 1, right);
        merge(arr, counts, left, mid, right);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    Element arr[n];
    int counts[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i].value);
        arr[i].index = i;
        counts[i] = 0;
    }

    mergeSort(arr, counts, 0, n - 1);

    for (int i = 0; i < n; i++) {
        printf("%d ", counts[i]);
    }
    printf("\n");

    return 0;
}
