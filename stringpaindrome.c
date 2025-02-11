#include<stdio.h>
#include<string.h>
void printpalindrome(char *str);
int main(){
    char name[50];
    scanf("%s",name);
    printpalindrome(name);
    return 0;

}void printpalindrome(char *str){
    int length =strlen(str);
    for(int i=0;i<length/2;i++){
        int first =str[i];
        int second=str[length-i-1];
        str[length-i-1]=first;
        str[i]=second;

    }
    printf("%s",str);


}