#include<stdio.h>
int vowelsconconent(char arr[]);
int main(){
    char name[50];
    fgets(name,50,stdin);
    printf("%d ",vowelsconconent(name));
}
int vowelsconconent(char arr[]){
    int vowels=0,consenent=0,number=0,specialcharacter=0;
    for(int i=0;arr!='\0';i++){
        if(arr[i] == 'A' || arr[i] == 'E' || arr[i] == 'I' || arr[i] == 'O' || arr[i] == 'U' ||
            arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u'){
            vowels++;

        }
    }
    return vowels;
}