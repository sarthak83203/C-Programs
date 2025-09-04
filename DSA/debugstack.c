/*Problem Statement



Sofi, a software engineer, is working on a grading system where she needs to store student grades in a stack and retrieve the most recent grade. The code provided pushes grades onto a stack and peeks at the topmost grade. 



However, the peekGrade function does not print anything when the stack is empty. Your task is to fix this issue and make sure the program works as intended.

Input format :
The first line of input consists of an integer n, representing the number of grades to be entered.

The second line contains n space-separated integers, each representing a grade.

Output format :
The output should print the most recent grade (i.e., the topmost grade) from the stack.



﻿Refer to the sample output for formatting specifications.

Code constraints :
The given test cases fall under the following constraints:

1 ≤ n ≤ 50

Grades will be positive integers.

Sample test cases :
Input 1 :
3
85 90 95
Output 1 :
95
Input 2 :
5
30 32 33 31 29
Output 2 :
29
Note :
*/
#include <stdio.h>
#include <stdlib.h>

// You are using GCC

// Global stack array and a variable to track the top of the stack.
// The stack has a fixed size of 50.
int gradeStack[50];
int gradeTop = -1;

// Function to push a grade onto the stack.
// It increments the stack pointer and then adds the new grade.
void PushGrade(int grade) {
    // Check for stack overflow (optional, but good practice).
    if (gradeTop >= 49) {
        printf("Error: Stack Overflow\n");
        return;
    }
    gradeStack[++gradeTop] = grade;
}

// Function to peek at the top element of the stack without removing it.
void peekGrade() {
    // Check if the stack is not empty.
    if (gradeTop != -1) {
        printf("%d\n", gradeStack[gradeTop]);
    } else {
        printf("The stack is empty.\n");
    }
}

int main() {
    int n;
    int grade;

    // Prompt the user to enter the number of grades to input.
    printf("Enter the number of grades to process: ");
    scanf("%d", &n);

    // Loop to read 'n' grades and push each one onto the stack.
    for (int i = 0; i < n; i++) {
        printf("Enter grade #%d: ", i + 1);
        scanf("%d", &grade);
        PushGrade(grade);
    }

    // After all grades are entered, peek at the top of the stack.
    printf("The last grade entered (top of the stack) is: ");
    peekGrade();
    
    return 0;
}
