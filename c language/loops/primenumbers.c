//break condition . WAP to check if a number is prime or not
// baar baar rounds loop called iterations

#include<stdio.h>
int main(){
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    int a=0;
    for (int i=2; i<=n-1; i++){     //   for (int i=2; i<=n-1; i++){  
        if(n%i==0){                //if(n%i==0){
            a=1;                   // printf("the given number is composite\n");
            break;                 //break;
        }                          //}
    }
    if(n==1)
    printf("1 is neither prime nor composite");
    else if(a==0)
    printf("the given number is prime\n");
    else{
        printf("the given number is composite\n");
    }
    return 0;
}