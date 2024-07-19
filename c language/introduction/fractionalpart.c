#include<stdio.h>
int main(){
    float a ;
    printf("enter the number : ");
    scanf("%f",&a);
    int y = a;
    float r = a - y;
    printf("the fractional part is : %f",r);
    return 0;
}