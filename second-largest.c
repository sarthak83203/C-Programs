#include<stdio.h>
struct se_largest{
    int n;
};
int main(){
    struct se_largest s1;
    scanf("%d",&s1.n);
    int arr[s1.n];
    for(int i=0;i<s1.n;i++){
        scanf("%d",&arr[i]);
    }
    int max1=0;
    int max2=0;
    for(int i=0;i<s1.n;i++){
        if(arr[i]>max1){
            max2=max1;
            max1=arr[i];
        }else if(arr[i]>max2){
            max2=arr[i];
        }
    }
    printf("Second maximum element is: %d",max2);
    return 0;

}