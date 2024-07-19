#include<stdio.h>
int add(int a, int b){
    return a+b ;
}
int main(){
    int a,b;
    printf("enter 1st no. ");
    scanf("%d",&a);
    printf("enter 2nd no. ");
    scanf("%d",&b);
    int sum = add(a,b);
    printf("the sum is : %d",sum);
    return 0;
}