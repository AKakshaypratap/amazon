// print  1 to n after recurssive call (important)

#include<stdio.h>
void increasing(int n){
     if(n==0) return ;    // base case
    
    increasing(n-1);      // call

    printf("%d\n",n);     // code
    return ;
}
int main(){
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
    increasing(n);
    return 0;
}