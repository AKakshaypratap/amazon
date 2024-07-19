#include <stdio.h>
int main(){
int a, b, c;
    printf("enter number a : ");
    scanf("%d", &a);
    printf("enter number b : ");
    scanf("%d", &b);
    printf("enter number c : ");
    scanf("%d", &c);
if(a+b>c && b+c>a && c+a>b){
    printf("the triangle is possible");
}
else{
    printf("triangle is not possible");
}
    return 0;
}