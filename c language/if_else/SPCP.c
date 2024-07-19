#include<stdio.h>
int main(){
    int sp,cp;
    printf("enter cost price : ");
    scanf("%d",&cp);
    printf("enter selling price : ");
    scanf("%d",&sp);
    if (sp>cp){
        printf("the profit ");
    }
    if (cp>sp){
        printf("loss");
    }
    if (cp == sp){
        printf("no profit no loss");
    }
    return 0;
}