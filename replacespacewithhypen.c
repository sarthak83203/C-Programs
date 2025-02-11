#include<stdio.h>
void printhypen(char *str);
int main(){
    char name[100];
    fgets(name,100,stdin);
    printhypen(name);

}
void printhypen(char *str){
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==' '){
            str[i]='-';
        }
    }
    printf("%s",str);  //remember that we will print str only not an str[i].Remember

}