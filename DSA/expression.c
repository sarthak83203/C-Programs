//Now  the expression is without space.......
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int stack[100];
int top=-1;
void push(int x){
    stack[++top]=x;
}
int pop(){
    return stack[top--];
}
int main(){
    char token[100];
    scanf("%s",token);
    for(int i=0;i<strlen(token);i++){
        char ch=token[i];
        if(ch>='0' && ch<='9'){
            push(ch-'0'); //Now this is converting the char to int
        }else{
            int b=pop();
            int a=pop();
            switch(ch){
                case '+':push(a+b);break;
                case '-':push(a-b);break;
                case '*':push(a*b);break;
                case '/':push(a/b);break;
                default:printf("-1");break;
            }
        }
    }
    printf("%d",pop());
    return 0;
}