//Understanding structure under structure
#include<stdio.h>
struct Student {
    int rollno;
    char name[100];
};
struct address{
    int regno;
    char city[100];
    struct Student s1;
};
int main(){
    int n;
    scanf("%d",&n);
    struct address l[n];
    for(int i=0;i<n;i++){
    scanf("%d",&l[i].regno);
    getchar();
    scanf("%[^\n]",l[i].city);
    scanf("%d",&l[i].s1.rollno);
    getchar();
    scanf("%[^\n]",&l[i].s1.name);

    }
    for(int i=0;i<n;i++){
    printf("%d ",l[i].regno);
    printf("%s ",l[i].city);
    printf("%d ",l[i].s1.rollno);
    printf("%s ",l[i].s1.name);

    }   
    return 0;
}