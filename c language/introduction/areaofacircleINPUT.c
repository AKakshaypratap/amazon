#include<stdio.h>
int main (){
    float radius;
    printf("enter the radius: ");
    scanf("%f",&radius);
    float pi = 3.14;
    float area = pi * radius * radius;
    printf("the area of cirle is : %f",area);
    return 0;
}