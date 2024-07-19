#include<stdio.h>
int sum(int n){
    if(n==1 || n==0) return 1;
    int recSum = n + sum(n-1);
    return recSum;
}
int main(){
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
    int final = sum(n);
    printf("%d",final);
    return 0;
}