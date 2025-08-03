/*Single File Programming Question
Problem Statement



Imagine you are developing a program for a scientific research project. The project requires sorting a collection of experimental data represented by floating-point numbers. Your task is to implement a program that can sort the data using the Bubble Sort algorithm.



The program should prompt the user to enter the number of data points they have and then input the corresponding floating-point numbers. The program should then use the Bubble Sort algorithm to sort the data in ascending order.



As the Bubble Sort algorithm progresses, the program should display intermediate results after each iteration, showing the partially sorted data. Finally, the program should display the fully sorted array.

Input format :
The first line of input consists of an integer, n, the number of elements in the array.

The second line of input consists of n elements of the array as a float value, separated by a space.

Output format :
The output prints the float values, representing the result of each iteration.

The last line of output prints the float values, representing the final sorted array.



Refer to the sample output for formatting specifications.

Code constraints :
The given test cases fall under the following constraints:

1 ≤ n ≤ 30

0.0 ≤ float values ≤ 100.0

Sample test cases :
Input 1 :
4
16.37 21.51 12.90 18.80
Output 1 :
After iteration 1: 16.37 12.90 18.80 21.51 
After iteration 2: 12.90 16.37 18.80 21.51 
Sorted array: 12.90 16.37 18.80 21.51 
Input 2 :
9
39.48 32.39 22.12 30.93 19.46 21.90 33.17 36.40 24.73
Output 2 :
After iteration 1: 32.39 22.12 30.93 19.46 21.90 33.17 36.40 24.73 39.48 
After iteration 2: 22.12 30.93 19.46 21.90 32.39 33.17 24.73 36.40 39.48 
After iteration 3: 22.12 19.46 21.90 30.93 32.39 24.73 33.17 36.40 39.48 
After iteration 4: 19.46 21.90 22.12 30.93 24.73 32.39 33.17 36.40 39.48 
After iteration 5: 19.46 21.90 22.12 24.73 30.93 32.39 33.17 36.40 39.48 
Sorted array: 19.46 21.90 22.12 24.73 30.93 32.39 33.17 36.40 39.48 
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
 */

 

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    float arr[n];
    for(int i=0;i<n;i++){
        scanf("%f",&arr[i]);
    }
    for(int i=0;i<n-1;i++){
        int found=0;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                float temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                found=1;
            }
            
            
        }
        if(found){
             printf("After iteration %d: ",i+1);
        for(int k=0;k<n;k++){
            printf("%.2f ",arr[k]);
        }
        printf("\n");
            
        }else{
            break;
        }
       
        
    }
    printf("Sorted array: ");
    for(int i=0;i<n;i++){
        printf("%.2f ",arr[i]);
    }
    printf("\n");
    
}
               
            


