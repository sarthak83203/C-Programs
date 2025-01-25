#include<stdio.h>
void swap_d(int *a,int *b);
int main(){
    int x,y;
    scanf("%d%d",&x,&y);
    swap_d(&x,&y);
    printf("%d && %d",x,y);

}
void swap_d(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;
    printf("a=%d & b=%d\n",*a,*b);
}