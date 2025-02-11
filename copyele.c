#include<stdio.h>
void copystring(char *str);
int main(){
    char name[50];
    scanf("%s",name);
    copystring(name);
    return 0;

}
void  copystring(char *str){
    char name2[50];
    int j=0;
    for(int i=0;str[i]!='\0';i++,j++){
        name2[j]=str[i];

    }
    name2[j]='\0';
    printf("%s",name2);


}