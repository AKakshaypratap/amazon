// print  1 to n after recurssive call

#include<stdio.h>
void sum(int n, int s){
     if(n==0){
        printf("%d",s);
          return ;
     } 
    sum(n-1,n+s);
    return ;
}
int main(){
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
    sum(n,0);
    return 0;
}