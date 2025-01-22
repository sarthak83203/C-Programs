#include<stdio.h>
#include<string.h>
int main(){
    int n;
    char name[100][100];
    char word[100];
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%s",name[i]);
    }
    scanf("%s",word);

    for(int i=0;i<n;i++){
        if(strcmp(name[i],word)==0){
            printf("Found in the row %d",i+1);
            return 0;
        }
    }
    printf("Not found");

}