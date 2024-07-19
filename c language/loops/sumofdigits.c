// 12345 isme 1+2+3+4+5 krna hai

// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter a number : ");
//     scanf("%d",&n);
//     int sum = 0;
//     int lastDigit = 0;
//     while(n!=0){
//         lastDigit = n%10;
//         sum = sum + lastDigit;
//         n=n/10;
//     }
//     printf("the sum of digits is %d",sum);
//     return 0;
// } 

// sum of odd digit numbers

#include<stdio.h>
int main(){
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    int sum = 0;
    int lastDigit = 0;
    while(n!=0){
        lastDigit = n%10;
        if(lastDigit % 2!=0)
        sum = sum+lastDigit ;
        n=n/10 ;
    }
    
    printf("the sum of digits is %d",sum);
    
    return 0;
}
