/*Single File Programming Question
Problem Statement



Naruto, a skilled ninja from the Hidden Leaf Village, is tasked with organizing the grades of his classmates using a sorting algorithm. He wrote a program that employs Insertion Sort to arrange the grades in ascending order, but he is unsure if the code will work as expected. 



Your task is to help Naruto debug his code so that the grades of his friends, like Sasuke, Sakura, and others, are properly sorted, and the first half of the sorted grades is printed.

Input format :
The first line of input consists of an integer total_students, representing the total number of students.

The second line consists of total_students integers, where each integer represents a student’s grade.

Output format :
The output prints: "First half: " followed by the first half of the sorted grade scores, space-separated.



Refer to the sample output for formatting specifications.

Code constraints :
The given test cases fall under the following constraints:

1 ≤ total_students ≤ 1000

The grades are integers.

Sample test cases :
Input 1 :
6
45 22 13 89 31 76
Output 1 :
First half: 13 22 31
Input 2 :
7
20 40 10 50 30 60 35
Output 2 :
First half: 10 20 30
Note :
The program will be evaluated only after the “Submit Code” is clicked.
Extra spaces and new line characters in the program output will result in the failure of the test case.
Marks : 10
Negative Marks : 0
image
Fill your code here
C (17)
theme
instruction
    int half_size = total_students / 2;
    */

// You are using GCC
#include <stdio.h>

void arrange_student_grades(int grade_scores[], int total_students) {
    for(int student_index = 1; student_index < total_students; student_index++) {
        int current_grade = grade_scores[student_index];
        int compare_position = student_index - 1;
        
        while(compare_position >= 0 && grade_scores[compare_position] > current_grade) {
            grade_scores[compare_position + 1] = grade_scores[compare_position];
            compare_position--;
        }
        grade_scores [compare_position + 1] = current_grade;
    }
    
    printf("First half:");
    int half_size = total_students / 2;
    for(int i = 0; i < half_size; i++) {
        printf(" %d", grade_scores[i]);
    }
}

int main() {
    int total_students;
    scanf("%d", &total_students);
    int grade_scores[total_students];
    
    for(int i = 0; i < total_students; i++) {
        scanf("%d", &grade_scores[i]);
    }
    
    arrange_student_grades(grade_scores, total_students);
    return 0;
}    


