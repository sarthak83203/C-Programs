/*You are organizing a sorting contest for programmers. In this challenge, participants are given an array of integers and must sort it using the insertion sort algorithm.



However, there is a twist:

Participants are required to keep track of the number of swaps made while sorting the array using insertion sort.



Your task is to implement a program that takes the array as input and calculates the total number of swaps performed during the insertion sort process.

Input format :
The first line of input contains an integer n, representing the number of elements in the array.

The second line of input contains n space-separated integers, denoting the elements of the array.

Output format :
The output prints an integer representing the number of swaps performed during insertion sort to sort the array in strictly increasing order.



Refer to the sample output for formatting specifications.

Code constraints :
1 ≤ n ≤ 10

0 ≤ elements ≤ 100

Sample test cases :
Input 1 :
4
4 3 2 1
Output 1 :
6
Input 2 :
5
10 19 6 3 5
Output 2 :
8
*/
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count=0;
    for(int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            count++;
            j--;
        }
        arr[j+1]=key;
    }
    printf("%d",count);
    
}