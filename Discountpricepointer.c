#include<stdio.h>
int main(){
    int n,m,y,Totalcost,x;
    int *ptr=&n;
    int *pttr=&m;
    printf("Enter the age of the people: ");
    scanf("%d",ptr); 
    printf("Number of tickets taken: ");
    scanf("%d",pttr);

    if(*(ptr)<18){
        y=150-(150*0.1);
        Totalcost=y * *(pttr);
    }
    else if(*(ptr)>=18){
        x=300-(300 * 0.05);
        Totalcost=x * *(pttr);
    }

    printf("Rs.%.2f",(float)Totalcost);  // If i want this then force an user to float. 

    return 0;




}