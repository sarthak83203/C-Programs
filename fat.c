
#include<stdio.h>
struct student{
    char name[50];
    int roll_no;
    int marks;
};
int main(){
    int n;
    scanf("%d",&n);
    struct student s1[n];
    for(int i=0;i<n;i++){
        scanf("%s ",s1[i].name);
        scanf("%d",&s1[i].roll_no);
        scanf("%d",&s1[i].marks);
    }
    for(int i=0;i<n;i++){
        printf("%s ",s1[i].name);
        printf("%d ",s1[i].roll_no);
        printf("%d ",s1[i].marks);

    }
    return 0;
}
