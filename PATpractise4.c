#include<stdio.h>
void Slicingofstring(char str[],int m,int n);
int main(){
    int n,m;
    
    char name[100];
    
    fgets(name,100,stdin);
    scanf("%d",&m);
    scanf("%d",&n);
    Slicingofstring(name,m,n);

    
}
void Slicingofstring(char str[],int m,int n){
    char newstr[100];
    int j=0;
    for(int i=m;i<=n;i++,j++){
        newstr[j]=str[i];

    }
    newstr[j]='\0';
    puts(newstr);
}