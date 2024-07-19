// #include<stdio.h>
// int power(int a, int b){
//     int pow = 1 ;
//     for (int i=1 ; i<=b ; i++){
//         int pow = pow*a ;
//     }
//     return pow;
// }
// int main(){
//     int a,b;
//     printf("enter the base: ");
//     scanf("%d",&a);
//     printf("enter the power: ");
//     scanf("%d",&b);
//     int p = power(a,b);
//     printf("%d",p);
//     return 0;
// }

#include<stdio.h>
int power(int a, int b){
    if(b==0) return 1;
    return a*power(a,b-1);    
}
int main(){
    int a;
    printf("enter the base: ");
    scanf("%d",&a);
    int b;
    printf("enter the power: ");
    scanf("%d",&b);
    int p = power(a,b);
    printf("%d",p);
    return 0;
}