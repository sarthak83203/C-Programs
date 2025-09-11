//Conversion of exprsssion from infix to postfix

#include<stdio.h>
#include<ctype.h>
char stack[55];
int top=-1;
void push(char x){
    stack[++top]=x;
}
char pop(){
    return stack[top--];
}
int priority(char x){
    if(x=='+' || x=='-'){
        return 1;
    }else if(x=='*' || x=='/'){
        return 2;
    }else{
        return 3;
    }

}
int main(){
    char infix[55];
    char postfix[55];
    int i=0; //for infix
    int k=0; //for postfix
    char ch;
    scanf("%s",infix);
    while((ch=infix[i++])!='\0'){ // for operant
        if(isalnum(ch)){
            postfix[k++]=ch;
        }else if(ch=='('){
            push(ch);
        }else if(ch==')'){
            while(stack[top]!='('){
                postfix[k++]=pop();
            }
            pop();
        }else{                                     //NOw comes operator
                while(top!=-1 && priority(stack[top])>=priority(ch)){
                    postfix[k++]=pop();
                }
                push(ch);
        }
    }
    while(top!=-1){
        postfix[k++]=pop();    //pop remaining part alone
    }
    postfix[k]='\0';
    printf("Postfix is : %s",postfix);
    return 0;

}
