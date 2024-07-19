//     printf("the sum of digits is %d",sum);
    
//     return 0;
// }
#include<stdio.h>
int main(){
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    int sum = 0;
    int lastDigit = 0;
    while(n!=0){
        lastDigit = n%10;
        if(lastDigit % 2!=0){
        sum = sum + lastDigit;
        n=n/10;
    }
    elseif(lastDigit==1){
        break;
    }
      printf("the sum of digits is %d",sum);
    }
    
    return 0;
}