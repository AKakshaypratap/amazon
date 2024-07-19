#include<stdio.h>
int main(){
    int a ;
    printf ("enter a number : ");
    scanf ("%d",&a);
    if (a % 5 == 0){
        printf("number is divisible by 5");
    }
    else{
        printf("indivisible number");
    }
    return 0;
}