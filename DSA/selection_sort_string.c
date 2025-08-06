/*You are developing a student grading system for a school. As part of the system, you need to implement a feature that sorts the student names in alphabetical order based on their names. This feature will allow teachers and administrators to easily organize and manage student records based on their names. 



Write a program that prompts the user to enter the number of students and their respective names. The program should then use the selection sort algorithm to sort the student names in alphabetical order. After each iteration of the selection sort, the program should display the updated student names to reflect the current state of the sorting process.

Input format :
The first line of input consists of the number of names N.

The second line of input consists of N names, separated by space.

Output format :
The first line of output prints the message "Initial order:" followed by a space-separated list of names in their original order.

For each iteration of the selection sort, print the message "After Iteration X:" followed by the names after sorting that iteration.

Finally, print the message "Sorted order:" followed by the names in alphabetical order.



Refer to the sample output for formatting specifications.

Code constraints :
In this scenario, the test cases fall under the following constraints:

1 ≤ N ≤ 100

2 ≤ length of each string ≤ 100

Sample test cases :
Input 1 :
4
Ram Aadhik Gayathri Aadhvik
Output 1 :
Initial order: Ram Aadhik Gayathri Aadhvik 
After Iteration 1: Aadhik Ram Gayathri Aadhvik 
After Iteration 2: Aadhik Aadhvik Gayathri Ram 
After Iteration 3: Aadhik Aadhvik Gayathri Ram 
Sorted order: Aadhik Aadhvik Gayathri Ram 
Input 2 :
6
Taylor Justin Selena Gomez Chris Martin 
Output 2 :
Initial order: Taylor Justin Selena Gomez Chris Martin 
After Iteration 1: Chris Justin Selena Gomez Taylor Martin 
After Iteration 2: Chris Gomez Selena Justin Taylor Martin 
After Iteration 3: Chris Gomez Justin Selena Taylor Martin 
After Iteration 4: Chris Gomez Justin Martin Taylor Selena 
After Iteration 5: Chris Gomez Justin Martin Selena Taylor 
Sorted order: Chris Gomez Just
*/
#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    char name[n][50];
    for(int i=0;i<n;i++){
        scanf("%s",name[i]);
    }
    printf("Initial order: ");
    for(int i=0;i<n;i++){
        printf("%s ",name[i]);
    }
    printf("\n");
    for(int i=0;i<n-1;i++){
        int min_index=i;
        for(int j=i+1;j<n;j++){
            if(strcmp(name[j],name[min_index])<0){
                min_index=j;
            }
            
        }
        if(min_index!=i){
            char temp[50];
            strcpy(temp,name[i]);
            strcpy(name[i],name[min_index]);
            strcpy(name[min_index],temp);
        }
        printf("After Iteration %d: ",i+1);
        for(int k=0;k<n;k++){
            printf("%s ",name[k]);
        }
        printf("\n");
    }
    printf("Sorted order: ");
    for(int i=0;i<n;i++){
        printf("%s ",name[i]);
    }
}