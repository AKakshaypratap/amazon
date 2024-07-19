#include<stdio.h>
// WAP to print reverse of a given number.

int main(){
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    int r = 0;
    int lastdigit = 0;
    while (n!=0){
    lastdigit = n%10;
    r = (r*10) + lastdigit ;
    n = n/10;
}
    printf("the reverse number is %d",r);
    return 0;
}