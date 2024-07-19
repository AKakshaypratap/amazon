#include<stdio.h>
int main (){
    float p,r,t,si;
    printf("enter the princpal : ");
    scanf("%f",&p);
    printf("enter the rate : ");
    scanf("%f",&r);
    printf("enter the time : ");
    scanf("%f",&t);
    // p = 100;
    // r = 10;
    // t = 2;
    si = (p*r*t)/100;
    printf("your simple interest is : %f",si);
    return 0;
}