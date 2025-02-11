#include<stdio.h>
void printlenstring(char *str);
int main(){
    char name[100];
    scanf("%s",name);

    printlenstring(name);


}
void printlenstring(char *str){
    int count=0;
    for(int i=0;str[i]!='\0';i++){
        count++;
    }
    printf("%d is the count of the %s",count,str);
}