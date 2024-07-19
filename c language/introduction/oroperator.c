#include<stdio.h>
int main(){
    int a ;
    printf("enter a number : ");
    scanf("%d",&a);
    if(a % 5 == 0 || a % 3 == 0 ){
        printf("the number is divisible by 3 or 5");
    }
    else{
        printf("the no. is indivisible");
    }
    return 0;
}