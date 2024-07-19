#include<stdio.h>
int main(){
    int a ;
    printf("enter a number : ");
    scanf("%d",&a);
     if(a % 5 == 0 || a % 3 == 0 ){
        if(a % 15 != 0){
        printf("the number is divisible by 3 or 5 but not 15");
        }
        else{
            printf("the no. is divisible by 15");
        }
    }
    else{
        printf("the no. is indivisible by 5 or 3");
    }
    return 0;
}