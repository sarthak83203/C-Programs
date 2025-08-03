/*Single File Programming Question
Problem Statement



Sana is designing a digital dictionary application for a local library. Each entry in the dictionary is a word that needs to be listed in alphabetical order, regardless of uppercase or lowercase letters.



To implement this, she plans to use the bubble sort algorithm to sort a list of words lexicographically in a case-insensitive manner.



Write a program that helps Sana sort the dictionary entries using bubble sort.

Input format :
The first line of input contains an integer n, representing the number of words.

The second line of input contains n space-separated words.

Output format :
The output prints the sorted list of words in lexicographical order, case-insensitive, separated by a space.



Refer to the sample output for the formatting specifications.

Code constraints :
1 ≤ n ≤ 100

The strings contain only lowercase and uppercase English letters.

The strings are case-insensitive

Sample test cases :
Input 1 :
5
Orange Apple Umbrella Egg Ink
Output 1 :
Apple Egg Ink Orange Umbrella 
Input 2 :
3
Cat Dog Elephant
Output 2 :
Cat Dog Elephant 
Input 3 :
3
cat Apple rate
Output 3 :
Apple cat rate 
*/

#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
   char words[n][50]; //this means character how many space it will take......
   for(int i=0;i<n;i++){
       scanf("%s",words[i]);
   }
   for(int i=0;i<n-1;i++){
       for(int j=0;j<n-i-1;j++){
           if(strcmp(words[j],words[j+1])>0){
               char temp[50];
               strcpy(temp,words[j]);
               strcpy(words[j],words[j+1]);
               strcpy(words[j+1],temp);
           }
       }
   }
   for(int i=0;i<n;i++){
       printf("%s ",words[i]);
   }
   return 0;
}