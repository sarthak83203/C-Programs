// Calculate the heart rate which has formula=heartrate * stroke volume.

#include<stdio.h>
int main(){
    float n,m;
    float *ptr=&n;
    float *pttr=&m;
    printf("Enter the heart rate in beats per second: ");
    scanf("%f",ptr);
    printf("Enter the stroke volumes in millilires per minutes: ");
    scanf("%f",pttr);

    printf("%.2f litres per minute",(float)((*ptr) * *(pttr))*0.001);




}