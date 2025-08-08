/*Alex is working on a data analysis project and needs to find specific elements within a dataset. He has an array of integers where some numbers may be repeated. His goal is to identify the Kth smallest element in this array. The challenge is that the array can contain duplicate values, so finding the exact Kth smallest element requires careful consideration.



Alex has decided to use a counting sort approach to solve this problem. Given an array of integers and a number K, where K is smaller than the size of the array, he needs to find and print the Kth smallest element in the array. 



Help Alex by implementing a function that efficiently finds and prints the Kth smallest element using the counting sort approach.

Input format :
The first line of input consists of an integer N, representing the number of elements in the array.

The second line of input consists of N space-separated integers, representing the elements of the array.

The third line of input consists of an integer K, representing the position of the smallest element to find.

Output format :
The output prints the Kth smallest element in the array as "Kth Smallest element is <smallest element>".



Refer to the sample output for the formatting specifications.

Code constraints :
The given test cases fall under the following constraints:

1 ≤ N ≤ 20

1 ≤ elements of the array ≤ 100

1 ≤ K ≤ N

Sample test cases :
Input 1 :
6
7 10 4 3 20 15
3
Output 1 :
Kth Smallest element is 7
Input 2 :
3
1 2 3
3
Output 2 :
Kth Smallest element is 3
Input 3 :
2 
1 2
1
Output 3 :
Kth Smallest element is 1
Input 4 :
8
9 7 5 3 8 7 6 5
4
Output 4 :
Kth Smallest element is 6
*/
// You are using GCC
#include<stdio.h>
int main(){
    int n,target;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&target);
   int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    int count[max+1];
    for(int i=0;i<=max;i++){
        count[i]=0;
    }
    for(int i=0;i<n;i++){
        count[arr[i]]++;
    }
    int index=0;
    for(int i=0;i<=max;i++){
        while(count[i]>0){
            arr[index++]=i;
            count[i]--;
        }
    }
    int max2=0;
    for(int i=0;i<target;i++){
        if(arr[i]>max2){
            max2=arr[i];
        }
        
    }
    printf("Kth Smallest element is %d",max2);
    
    
    
}