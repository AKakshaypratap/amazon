// #include<stdio.h>
// int factorial(int x){
//  int  fact = 1;      
//     for (int i=1 ; i<=x ; i++){
//         fact = fact*i ;
//     }
//     return fact ;
// }
// int main(){
//     int n;
//     printf("enter n : ");
//     scanf("%d",&n);
//     int r;
//     printf("enter r : ");
//     scanf("%d",&r);
//     int nfact = factorial(n);        // n!
//     int rfact = factorial(r);        // r!
//     int nrfact = factorial(n-r);       // n-r !
//     int ncr = nfact/(rfact*nrfact);
//     printf("%d",ncr);
//     return 0;
// }
#include<stdio.h>
int main(){
    int n;
    printf("enter n : ");
    scanf("%d",&n);
    int r;
    printf("enter r : ");
    scanf("%d",&r);
    int nfact = 1 ;
    int rfact = 1 ; 
    int nrfact = 1 ;
    for(int i=1 ; i<=n ; i++){
        nfact = nfact*i ;
    }
    for(int i=1 ; i<=r ; i++){
        rfact = rfact*i ;
    }
    for(int i=1 ; i<=n-r ; i++){
        nrfact = nrfact*i ;
    }
    int ncr = nfact/(rfact*nrfact);
    printf("%d",ncr);
    return 0;
}