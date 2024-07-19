//  1-2+3-4+5-6+7-8............

#include<stdio.h>
int main(){
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    int sum = 0;
    for(int i=1 ; i<=n ; i++){
    if(i%2!=0) sum = (sum + i);
    else sum = (sum - i);
    }
    printf("the sum is : %d",sum);
    return 0;
}

// aik tareeka (1-2)+(3-4)+(5-6)+(7-8)
//               -1 +  -1 + -1  + -1   = -4
// If n is even, i.e (n%2==0)
//                    to sum = -n/2


//           (1-2)+(3-4)+(5-6)+7
//             -1 +  -1 +  -1  + 7
//                -3+7  = 4
// if n is odd, i.e (n%2!=0)
//                   to sum = -n/2 + n