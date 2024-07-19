#include<stdio.h>
int main(){
    int l,b;
    printf("enter length : ");
    scanf("%d",&l);
    printf("enter breadth : ");
    scanf("%d",&b);
    int a = (l*b);
    int p = 2*(l+b);
    if (a > p){
        printf("the area is greater");
    }
   else{
    printf("area is not greater than perimeter");
   }
    return 0;
}