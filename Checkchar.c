#include<stdio.h>
void Checkchar(char str[],char ch);

int main(){
    int character;
    char name[100];
    fgets(name,100,stdin);
    scanf("%c",&character);
    
    Checkchar(name,character);

}
void Checkchar(char str[],char ch){
    for(int i=0;i<str[i]!=0;i++){
        if(str[i]==ch){
            printf("Character is Present");
             return; // as it coming two times so we use return without any value
        }
    }
    printf("Character is not present");
   
}