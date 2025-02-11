#include<stdio.h>
void printchar(char *str);
int main(){
    char name[20];
    scanf("%s",name);
    printchar(name);
    return 0;

}
void printchar(char *str){
    printf("%s",str);
}