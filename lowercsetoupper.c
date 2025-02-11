#include<stdio.h>
#include<ctype.h>
void printlowercase(char *str);
int main(){
    char name[100];
    scanf("%s",name);
    printlowercase(name);
    return 0;

}
void printlowercase(char *str){
    for(int i=0;str[i]!='\0';i++){
        str[i]=tolower(str[i]);
    }
    printf("%s",str);



}