#include<stdio.h>
void Slicing(char str[],int m,int n);
int main(){
    char name[100];
    fgets(name,100,stdin);
    Slicing(name,3,5);

}
void Slicing(char str[],int m,int n){
    char newstr[100];
    int j=0;
    for(int i=m;i<=n;i++,j++){
        newstr[j]=str[i];         //New String also have an index so newString index is j

    }
    newstr[j]='\0';
    puts(newstr);

}