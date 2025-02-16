#include<stdio.h>
union KINETIC_ENERGY{
    float result;

};
int main(){
    union KINETIC_ENERGY m1;
    float mass,velocity;
    scanf("%f",&mass);
    scanf("%f",&velocity);
    m1.result=0.5 * mass * (velocity * velocity); 
    printf("%.2f",m1.result);

}