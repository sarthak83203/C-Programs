#include<stdio.h>
int main(){
    int n;
    int number=1;
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            printf("%d ",number);
            number++;
        }
        printf("\n");
    }


    return 0;
}