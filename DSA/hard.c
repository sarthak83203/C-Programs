/*Single File Programming Question
Problem Statement



Maria is managing a scheduling system that records various time-points throughout the day. She needs to determine the shortest interval between any two recorded times. By converting the time-points into minutes and sorting them using QuickSort, she can efficiently calculate the minimum difference. Help Maria find the smallest interval between any two times in the list.

Input format :
The first line of input consists of an integer n, representing the number of time-points in the list.

The next n lines each contain a string in the format "HH:MM", representing a time-point.

Output format :
The output prints "The time difference is: " followed by a single integer, representing the minimum minute difference between any two time points in the list.



Refer to the sample output for formatting specifications.

Code constraints :
2 ≤ n ≤ 100

Each time-point is in the format "HH:MM".

Sample test cases :
Input 1 :
2
23:59
00:00
Output 1 :
The time difference is: 1
Input 2 :
3
00:00
23:59
00:00
Output 2 :
The time difference is: 0
Note :
The program will be evaluated only after the “Submit Code” is clicked.
*/
#include <stdio.h>
#include <stdlib.h>

// QuickSort function
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivot = arr[high];
        int i = low - 1;
        for (int j = low; j < high; j++) {
            if (arr[j] < pivot) {
                i++;
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        int temp = arr[i + 1];
        arr[i + 1] = arr[high];
        arr[high] = temp;

        int pi = i + 1;

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Convert "HH:MM" to total minutes
int timeToMinutes(char *time) {
    int h, m;
    sscanf(time, "%d:%d", &h, &m);
    return h * 60 + m;
}

int main() {
    int n;
    scanf("%d", &n);

    char timeStr[10];
    int minutes[200]; // enough for n ≤ 100

    // Read times and convert to minutes
    for (int i = 0; i < n; i++) {
        scanf("%s", timeStr);
        minutes[i] = timeToMinutes(timeStr);
    }

    // Sort using QuickSort
    quickSort(minutes, 0, n - 1);

    // Find min difference between consecutive times
    int minDiff = 1440; // max possible difference in minutes (24*60)
    for (int i = 1; i < n; i++) {
        int diff = minutes[i] - minutes[i - 1];
        if (diff < minDiff) {
            minDiff = diff;
        }
    }

    // Check wrap-around case (last -> first)
    int wrapDiff = (1440 - minutes[n - 1]) + minutes[0];
    if (wrapDiff < minDiff) {
        minDiff = wrapDiff;
    }

    // Output
    printf("The time difference is: %d\n", minDiff);

    return 0;
}
