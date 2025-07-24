/*In a gymnastics or diving competition, each contestant’s score is calculated by removing the lowest and highest scores and then summing the remaining scores. A judge awards points between 1 and 10, with 1 being the lowest and 10 being the highest.



Write a program that allows the user to enter eight judges' scores and outputs the contestant's final points.

Input format :
The input consists of eight floating-point numbers representing the scores given by the judges. These scores will be entered on a single line, separated by spaces.

Output format :
The output will consist of four lines:

The lowest score displayed in the format:

"Your lowest score is <lowestscore>", rounded to two decimal places.

The highest score displayed in the format:

"Your maximum score is <maximumscore>", rounded to two decimal places.

The total points after removing the lowest and highest scores, displayed as:

"Your total point is <totalpoints>", rounded to two decimal places.

The average of the remaining scores (after removing the lowest and highest), displayed as:

"Your average point is <averagepoint>", rounded to two decimal places.



Refer to the sample outputs for the formatting specifications.

Code constraints :
The given test cases fall under the following specifications:

1.0 ≤ score ≤ 10.0

Sample test cases :
Input 1 :
9.2 9.3 9.0 9.9 9.5 9.5 9.6 9.8
Output 1 :
Your lowest score is 9.00
Your maximum score is 9.90
Your total point is 56.90
Your average point is 9.48
Input 2 :
9.1 9.0 8.9 8.8 9.4 7.9 8.6 9.8
Output 2 :
Your lowest score is 7.90
Your maximum score is 9.80
Your total point is 53.80
Your average point is 8.97
*/
#include<stdio.h>
int main(){
    
    
    float arr[8];
    float sum=0;
    for(int i=0;i<8;i++){
        scanf("%f",&arr[i]);
        
    }
    float max=arr[0];
        float mins=arr[0];
    for(int i=0;i<8;i++){
        
         sum=sum+arr[i];
        if(arr[i]>max){
            max=arr[i];
        }else if(arr[i]<mins){
            mins=arr[i];
        }
       
    }
    printf("Your lowest score is %.2f\n",mins);
    printf("Your maximum score is %.2f\n",max);
    printf("Your Total point is %.2f\n",(sum-max-mins));
    printf("Your average point is %.2f",((sum-max-mins)/6));
    
}