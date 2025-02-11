#include<stdio.h>
#include<string.h>
void sortcharacter(char *str);
int main(){
    char name[50];
    scanf("%s",name);
    sortcharacter(name);
    return 0;
    
}
void sortcharacter(char *str){
    int length=strlen(str);
    for(int i=0;i<length-1;i++){
        for(int j=0;j<length-i-1;j++){
            if(str[j]>str[j+1]){
                int temp=str[j];
                str[j]=str[j+1];
                str[j+1]=temp;
            }
        }
    }
    printf("%s",str);

}