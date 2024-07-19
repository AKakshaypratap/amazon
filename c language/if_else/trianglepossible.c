#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter first side : ");
    scanf("%d",&a);
    printf("enter second side : ");
    scanf("%d",&b);
    printf("enter third side : ");
    scanf("%d",&c);
    if(a+b>c && b+c>a && c+a>b){
        printf("triangle is possible");
    }
     else{
        printf("triangle is not possible");
    }
    return 0;
}