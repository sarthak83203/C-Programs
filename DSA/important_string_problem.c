/*Problem Statement



In a computer science class, students are assigned unique identification letters based on their seating arrangement. 



Each student has a specific letter, and you are tasked with creating a program to sort these letters in ascending order using the bubble sort algorithm. The sorting should be based on their ASCII values. 



Input the total number of students and their assigned letters, then display the sorted list, allowing the students to easily identify their seating order.

Input format :
The first line of input consists of an integer N, representing the total number of students.

The second line consists of N space-separated characters, each representing the unique identification letter assigned to a student.

Output format :
The output prints the sorted list of identification letters based on their ASCII values.



Refer to the sample output for formatting specifications.

Code constraints :
1 ≤ N ≤ 15

Each identification letter is a valid ASCII character.

The input characters are case-sensitive.

Sample test cases :
Input 1 :
5
a y h j o
Output 1 :
a h j o y 
Input 2 :
7
Q G Y O M N B
Output 2 :
B G M N O Q Y 
Input 3 :
8
a e T V z X h K
Output 3 :
K T V X a e h z 
*/

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    char name[n];
    
    for(int i=0;i<n;i++){
        scanf(" %c",&name[i]); //Here we have taken space before %c The reason is "To ignore white space,nextLine etc".
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(name[j]>name[j+1]){
                char temp=name[j];
                name[j]=name[j+1];
                name[j+1]=temp;
                
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%c ",name[i]);
    }
    
    
}