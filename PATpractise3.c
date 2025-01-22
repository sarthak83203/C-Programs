#include<stdio.h>
int main(){
    int m,n,p,r,suming1=0,suming2=0,suming3=0,op;     // Where m is rows and n is coloums
    scanf("%d",&m);
    scanf("%d",&n);
    int arr[m][n];

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    for(int i=0;i<m;i++){
        int sum=0;  //Initialising each row with zero to get sum.
        for(int j=0;j<n;j++){
            sum=sum+arr[i][j];
           

        }
        p=i;
        op=sum;
        while(sum!=0){
            if(p==0){
                r=sum%10;
                suming1=suming1+r;
                sum=sum/10;

            }else if(p==1){
                r=sum%10;
                suming2=suming2+r;
                sum=sum/10;


            }else if(p==2){
                r=sum%10;
                suming3=suming3+r;
                sum=sum/10;


            }
        }

       
    
    
        
       
    }
 
    printf("%d\n",suming1);
    printf("%d\n",suming2);
    printf("%d\n",suming3);







    

}