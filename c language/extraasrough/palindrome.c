#include<stdio.h>
int main(){
    int num, rev = 0 ,rem , n ;
    printf("enter a number : ");
    scanf("%d",&num);
    n = num;
    while(num != 0){
        rem = num % 10 ;
        rev = rev*10 + rem;
        num = num/10 ;
    }
    if (n == rev){
        printf("%d is palindrome number",n);
    }
    else{
        printf("%d is not palindrome number",n);
    }
    return 0;
}