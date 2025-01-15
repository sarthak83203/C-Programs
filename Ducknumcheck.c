#include<stdio.h>
int isducknumber(int n);
int main(){
    int n;
    scanf("%d",&n);
    if(isducknumber(n)){
        printf("%d is a duck number.",n);

    }else{
        printf("%d is not a duck number.",n);

    }


   
}
int isducknumber(int n){
    int r;
    int isnumber=0;
    int wasnumber=1;
    int originalnumber=n;
    while(n>0){
        r=n%10;

        if(r==0){
            isnumber=1;
        }
        if(r!=0){
            wasnumber=0;
        }
        n=n/10;

    }
    return isnumber;

}