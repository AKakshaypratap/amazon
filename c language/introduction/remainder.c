#include<stdio.h>
int main(){
    int a , b ;
    printf("enter dividend : ");
    scanf("%d",&a);
    printf("enter divisor : ");
    scanf("%d",&b);
    // int q = a/b ;
    // int r = a - (b*q);
    int r = a % b ;
    printf("the remainder is %d",r);
    return 0;
}