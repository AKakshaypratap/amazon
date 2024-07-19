// #include<stdio.h>
// int main(){
//     int a,b ;
//     printf("enter number a : ");
//     scanf("%d",&a);
//     printf("enter number b : ");
//     scanf("%d",&b);
//     int temp;
//     temp = a ;
//     a = b ;
//     b = temp ;
//     printf("the swaped a is : %d\n",a);
//     printf("the swaped b is : %d",b);
//     return 0;
// }

// swaping of two numbers without using temp box

#include<stdio.h>
int main(){
    int a,b ;
    printf("enter number a : ");
    scanf("%d",&a);
    printf("enter number b : ");
    scanf("%d",&b);
    a = a+b ;
    b = a-b ;
    a = a-b ;
    printf("the swaped a is : %d\n",a);
    printf("the swaped b is : %d",b);
    return 0;
}