#include<stdio.h>
struct Student{
    int rollno;
    float cgpa;
    char name[100];
};  
int main(){
    struct Student s1;
    scanf("%d",&s1.rollno);
    scanf("%f",&s1.cgpa);
    scanf("%s",s1.name);
    printf("%d\n",s1.rollno);
    printf("%.2f\n",s1.cgpa);
    printf("%s\n",s1.name);
    return 0;
}