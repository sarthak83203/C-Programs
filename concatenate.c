// Concatnate the String without using any inbuild function
#include<stdio.h>
void Concatenate(char *str1,char *str2);
int main(){
    char name1[50];
    char name2[50];
    scanf("%s",name1);
    scanf("%s",name2);
    Concatenate(name1,name2);
    return 0;


}
void Concatenate(char *str1,char *str2){
    int i=0,j=0;
    //Shifting the i to end so that we can concatenate easily.
    while(str1[i]!='\0'){
        i++;   // Increasing the i one by one using the while loop.
    }
    while(str2[j]!='\0'){ // Now after going to last we can copy the the elements from one string to other string.
        str1[i]=str2[j]; // Copying the one string to other.
        i++; // increasing i and .
        j++; //j one by one.
    }
    str1[i]='\0';
    printf("%s",str1);


}
