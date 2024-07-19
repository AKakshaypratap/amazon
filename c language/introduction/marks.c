#include<stdio.h>
int main(){
    int a;
    printf("enter the marks : ");
    scanf("%d",&a);
    if(a>=90 && a<=100){
        printf("excellent");
    }
    else if (a>=80 && a<90){
        printf("very good");
    }
    else if (a>=70 && a<80){
        printf("good");
    }
    else if (a>=60 && a<70){
        printf("average");
    }
    else{
        printf("fail");
    }
    return 0;
}