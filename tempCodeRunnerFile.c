#include<stdio.h>
// int main(){
//     int n,k;
//     scanf("%d",&n);
//     scanf("%d",&k);
//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     //Now the shifting of array is towards right.By Kth position.
//     k=k%n; //Now this is the step in which if k>n then it will resists from full rotation.
//     for(int i=0;i<k;i++){
//         int temp=arr[n-1];
//         for(int j=n-1;j>0;j--){
//             arr[j]=arr[j-1];
//         }
//         arr[0]=temp;
//     }
//     for(int i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
//     return 0;

// }