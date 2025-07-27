/*Tom is working in a warehouse inventory system, where the item IDs are assigned sequentially in ascending order. 



He wants to develop a program using recursive binary search to efficiently determine the closest item ID that is less than or equal to a given target ID. 



The program takes the total number of items and their sorted IDs as input, assisting warehouse staff in quickly identifying the closest available item less than or equal to the target ID. Help Tom in this program.

Input format :
The first line of input consists of an integer N, representing the number of items in the warehouse.

The second line consists of N space-separated integers, representing the sorted list of item IDs.

The third line consists of an integer representing the target item ID.

Output format :
The output prints "The closest item ID less than or equal to X is Y", where X is the target ID and Y is the closest item ID less than or equal to X.

If no such element exists, print "No closest item with an ID less than or equal to X exists in the warehouse", where X is the target ID.



Refer to the sample output for formatting specifications.

Code constraints :
In this scenario, the test cases fall under the following constraints:

1 ≤ N ≤ 10

1 ≤ item ID ≤ 100

Sample test cases :
Input 1 :
7
17 25 38 47 51 62 79
50
Output 1 :
The closest item ID less than or equal to 50 is 47
Input 2 :
6
41 52 58 61 65 72
65
Output 2 :
The closest item ID less than or equal to 65 is 65
Input 3 :
5
12 15 24 25 35
10
Output 3 :
No closest item with an ID less than or equal to 10 exists in the warehouse
*/
#include<stdio.h>
int main(){
    int n,key;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&key);
    int result=-1;
    for(int i=0;i<n;i++){
        if(arr[i]<=key){
            result=arr[i]; //keep updating the closest value........
        }else{
            break;
        }
    }
    if(result==-1){
        printf("No closest item with an ID less than or equal to %d exists in the warehouse",key);
    }else{
        printf("The closest item ID less than or equal to %d is %d",key,result);
    }
    
}