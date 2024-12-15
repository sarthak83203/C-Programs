#include <stdio.h>
int main(){
    int r;
    int a;
    int sum=0;
    scanf("%d",&a);
    int mm=a;
    while(a>0){
        r=a%10;
        sum=sum*10+r;
        a=a/10;
    
    }
    if(mm==sum){
        printf("Yes its Palindrome");
       }else{
        printf("No its not an Palindrome");
       }
       return 0;
}