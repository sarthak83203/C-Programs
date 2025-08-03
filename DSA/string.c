/*Single File Programming Question
Problem Statement



Imagine you are part of a legal team responsible for reviewing contracts and legal documents. To streamline the review process, you need a tool that can quickly check if specific legal terms or clauses are included in a large text document. 



Write a program that uses a linear search algorithm to search a given document (a sentence) for the presence of a specific legal term or clause.

Input format :
The first line of input consists of a string S, the document (a single sentence) containing up to 1000 characters.

The second line consists of a string T, representing the legal term or clause to search for, which can be up to 100 characters long.

Output format :
If the legal term or clause is found in the document, print "The word '[T]' is present in the given sentence."

If the legal term or clause is not found, print "The word '[T]' is not present in the given sentence."



Refer to the sample output for formatting specifications.

Code constraints :
The input sentence is case-sensitive.

Sample test cases :
Input 1 :
Constellations of stars, murals on city walls
stars
Output 1 :
The word 'stars' is present in the given sentence.
Input 2 :
Constellations of Stars, murals on city walls
stars
Output 2 :
The word 'stars' is not presen
*/
#include<stdio.h>
#include<string.h>
int main(){
    char str[1001];
    char str1[101];
   fgets(str,sizeof(str),stdin);
   
   str[strcspn(str,"\n")]='\0';
   scanf("%s",str1);
   int found=0;
   int j;
   
   for(int i=0;str[i]!=0;i++){
       j=0;
       while(str[i+j]==str1[j] && str1[j]!='\0'){
           j++;
           
       }
       if(str1[j]=='\0'){
           found=1;
           break;
       }
   }
   if(found){
       printf("The word '%s' is present in the given sentence.\n",str1);
   }else{
       printf("The word '%s' is not present in the given sentence.\n",str1);
   }
   return 0;

    
    
    
    
}