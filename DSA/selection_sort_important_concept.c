/*Problem Statement



You are tasked with sorting a list of flight schedules based on their departure times. Each flight schedule is represented by the departure time in minutes and the destination city.



Write a program to take the flight schedules as input and sort them in ascending order of departure times using the selection sort algorithm.

Input format :
The first line of input consists of an integer n, denoting the number of flight schedules.

The following n lines of input consist of an integer D, representing the departure time, and a string S, representing the destination city. The departure time and destination city are separated by a space.

Output format :
The output displays the sorted flight schedules in ascending order of departure times.

Each line should contain the departure time and the corresponding destination city, separated by a pipe (|) symbol.

Example: "Departure Time: <time> minutes | Destination: <destination>"



Refer to the sample output for formatting specifications.

Code constraints :
1 ≤ n ≤ 15

Sample test cases :
Input 1 :
4
1730 New York
1615 Los Angeles
1530 Chicago
1720 Miami
Output 1 :
Departure Time: 1530 minutes | Destination: Chicago
Departure Time: 1615 minutes | Destination: Los Angeles
Departure Time: 1720 minutes | Destination: Miami
Departure Time: 1730 minutes | Destination: New York
Input 2 :
3
1830 Tokyo
2359 London
1505 Paris
Output 2 :
Departure Time: 1505 minutes | Destination: Paris
Departure Time: 1830 minutes | Destination: Tokyo
Departure Time: 2359 minutes |
*/
#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    char name[n][50];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        fgets(name[i],sizeof(name[i]),stdin);
        name[i][strcspn(name[i],"\n")]='\0'; //This is for ignoring spaces.
    }
    for(int i=0;i<n-1;i++){
        int min_index=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min_index]){
                min_index=j;
                
            }
        }
        if(min_index!=i){
            int temp=arr[i];
            arr[i]=arr[min_index];
            arr[min_index]=temp;
            
            
            
            char temp1[50];
            strcpy(temp1,name[i]);
            strcpy(name[i],name[min_index]);
            strcpy(name[min_index],temp1);
        }
    }
    for(int i=0;i<n;i++){
        printf("Departure Time: %d minutes | Destination: %s\n",arr[i],name[i]);
    }
 
    }
    
