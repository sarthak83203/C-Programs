#include<stdio.h>
void max_min(int *n,int m);

int main(){
    int p;
    scanf("%d",&p);
    int arr[p];

    for(int i=0;i<p;i++){
        scanf("%d",&arr[i]);
    }


    max_min(arr,p);
    return 0;
}

void max_min(int *n,int m){
    int min=*n;
    int max=*n;

    for(int i=0;i<m;i++){
        if(*(n+i)>max){
            max=*(n+i);

        }else if(*(n+i)<min){
            min=*(n+i);
        }

    }
    printf("%d",max-min);




}