// #include<stdio.h>
// void greeting(int n){
//      if(n==0) return ;
//     printf("good morning\n");
//     greeting(n-1);
//     return ;
// }
// int main(){
//     int n;
//     printf("enter the number : ");
//     scanf("%d",&n);
//     greeting(n);
//     return 0;
// }

#include<stdio.h>
void decreasing(int n){
     if(n==0) return ;   // this is base case
    printf("%d\n",n);    // code
    decreasing(n-1);     // call
    return ;
}
int main(){
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
    decreasing(n);
    return 0;
}