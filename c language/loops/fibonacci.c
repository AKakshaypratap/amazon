// fibonacci series : 1 1 2 3 5 8 13 21 34.......

// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter a number : ");
//     scanf("%d",&n);
//     int a=1;
//     int b=1;
//     int sum=1;
//     for(int i=1; i<=n-2 ; i++){ // n-2 isliye kyuki series 2 3 5 8 se shuru ho rhi thii 
//                                 // starting k 1 1 count nhi hue the 
//         sum = a+b;
//         a=b;
//         b=sum;    
//     }
//      printf("the %d fibanaci number is :%d",n,sum);
//     return 0;
// }

#include<stdio.h>
int main(){
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    int a=1;
    int b=1;
    int sum=1;
    for(int i=1; i<=n-2 ; i++){ // n-2 isliye kyuki series 2 3 5 8 se shuru ho rhi thii 
                                // starting k 1 1 count nhi hue the 
        sum = a+b;
        a=b;
        b=sum;    
    }
     printf("the %d fibanaci number is :%d\n",n,sum);
    return 0;
}