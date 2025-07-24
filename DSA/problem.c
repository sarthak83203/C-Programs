/*Aryan, a data analyst, is working on a project where he needs to analyze a 3×3 matrix. His task is to identify all odd numbers in the matrix, count them, and calculate their total sum. Additionally, he needs to display the array index positions of these odd elements.



Help Aryan write a program to store the matrix, find the sum of all odd elements, count them, and display their respective positions in the matrix.

Input format :
The input consists of three lines, where each line contains three integers representing the elements of a 3x3 matrix. Each integer is space-separated.

Output format :
The first output line should display "Odd elements and their positions: " followed by the odd elements and their respective indices (row, column). Each odd element is displayed in the format:

odd_element row_index column_index

The second output line should print the total count of odd elements in the matrix, formatted as:

Total count of odd elements: count

The third output line should print the sum of all odd elements, formatted as:

Sum of odd elements: sum



Refer to the sample output for the exact text and format.

Code constraints :
The given test cases fall under the following constraints:

The input must be a 3x3 matrix.

Sample test cases :
Input 1 :
1 2 4
5 6 3
7 0 6
Output 1 :
Odd elements and their positions:
1 0 0
5 1 0
3 1 2
7 2 0
Total count of odd elements: 4
Sum of odd elements: 16
Input 2 :
10 11 12
45 65 89
71 84 81
Output 2 :
Odd elements and their positions:
11 0 1
45 1 0
65 1 1
89 1 2
71 2 0
81 2 2
Total count of odd elements: 6
Sum of odd elements: 362
*/
#include<stdio.h>
int main(){
    int rows,cols;
    
    int arr[3][3];
    int count=0;
    int sum=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Odd elements and their positions:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]%2!=0){
                printf("%d %d %d\n",arr[i][j],i,j);
                sum=sum+arr[i][j];
                count++;
            }
        }
         
    }
   printf("Total count of odd elements: %d\n",count);
    printf("Sum of odd elements: %d",sum);
    
}