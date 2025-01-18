#include<stdio.h>
int lengthofstring(char arr[]);
int main(){
    // int n;
    // scanf("%d",&n);
    char name[100];
    fgets(name,100,stdin);
    printf("Total length of the enter string is : %d",lengthofstring(name));
    return 0;

    
    


}
int lengthofstring(char arr[]){
    int count=0;
    for(int i=0;arr[i]!='\0';i++){
        // as the i count the null charater also so we have to do count-1
        count++;
    }
    return count-1;
}