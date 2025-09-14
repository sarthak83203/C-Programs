//With spaces expression evaluation
#include <stdio.h>
#include <stdlib.h>

int stack[100];
int top = -1;

void push(int x) {
    stack[++top] = x;
}
int pop() {
    return stack[top--];
}

int main() {
    char token[10];   // to read numbers/operators
    int a, b;

    while (scanf("%s", token) != EOF) {   // read until end of line
        if (token[0] >= '0' && token[0] <= '9') {
            push(atoi(token));   // number → push
        }
        else {
            b = pop();
            a = pop();

            switch (token[0]) {
                case '+': push(a + b); break;
                case '-': push(a - b); break;
                case '*': push(a * b); break;
                case '/': push(a / b); break;
                default: printf("-1"); return 0; // invalid operator
            }
        }
    }

    printf("%d", pop());
    return 0;
}
