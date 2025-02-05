//Manage population through pointer

#include <stdio.h>

int main() {
    int n,m,r,sum=0; 
    printf("Enter the number of iterations: ");
    scanf("%d", &n); 
     
    char arr[100];  
    char *pttr = arr;  

    for (int i = 0; i<=n; i++) {
        printf("Enter a string and a number: ");
        scanf("%s %d", pttr, &m);
        sum=sum+m; 


    }
    printf("%d",sum);

    return 0;
}