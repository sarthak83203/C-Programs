#include<stdio.h>
int main(){
    int testcase,n;
    scanf("%d",&testcase);
    while(testcase--){
        scanf("%d",&n);
        int arr[n][n];

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                scanf("%d",&arr[i][j]);
            }
        }

        int top_left=0,top_right=0,bottom_left=0,bottom_right=0;
        int half=n/2;

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i<half && j<half){
                    top_left=top_left+arr[i][j];
                }else if(i<half && j>=half){
                    top_right=top_right+arr[i][j];
                }else if(i>=half && j<half){
                    bottom_left=bottom_left+arr[i][j];
                }else if(i>=half && j>=half){
                    bottom_right=bottom_right+arr[i][j];
            
            }
            }
            printf("\n");
        }
        printf("%d %d %d %d",top_left,top_right,bottom_left,bottom_left);



    }
    return 0;
}