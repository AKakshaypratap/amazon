#include<stdio.h>
int factorial(int n){
if(n==1 || n==0) return 1 ;    //  base case
return n * factorial(n-1);
}
int main(){
    int n,fact ;
    printf("enter the number : ");
    scanf("%d",&n);
    fact = factorial(n);
    printf("the factorial of %d is %d",n,fact);
    return 0;
}