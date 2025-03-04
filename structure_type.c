#include<stdio.h>
 typedef struct {
    int a;
    float b;
    char name[100];
}employee;  
int main(){
    employee y1;
    scanf("%d",&y1.a);
    scanf("%f",&y1.b);
    scanf("%s",y1.name);
    printf("%s is the name",y1.name);
    return 0;
}