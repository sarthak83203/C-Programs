// Question is two sort and array the take an diffrence whose diff is larger it will be there.

#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,m,p,sum=0;
    scanf("%d",&n);
    int arr[n];
    int *ptr=arr;


    for(int i=0;i<n;i++){
        scanf("%d",(ptr+i));
    }

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(*(ptr+j)>*(ptr+j+1)){
            int temp=*(ptr+j);
            *(ptr+j)=*(ptr+j+1);
            *(ptr+j+1)=temp;

        }
        }
    }

   for(int i=0;i<n-1;i++){
    int m=*(ptr+i)-*(ptr+i+1);
    sum=sum+abs(m);
   }

   printf("%d",sum);

   return 0;

   
}