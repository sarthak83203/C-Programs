#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    char name[100][100];   //If we want to check an fullword then take an Array as String Important concept 
    char word[100];

    for(int i=0;i<n;i++){
        scanf("%s",name[i]);
    }
    scanf("%s",word);

    for(int i=0;i<n;i++){
        if(strcmp(name[i],word)==0){         // This function is used for compare of two strings
            printf("Found in row: %d",i+1);
            return 0;
        }
    }
    printf("Not found");
    return 0;

}