// to find even or odd using ternary operator
#include<stdio.h>
int main(){
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    n%2==0 ? printf("the number is even") : printf("odd number");
    return 0;
}