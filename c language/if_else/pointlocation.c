#include<stdio.h>
int main(){
    int x1, y1 ;
    printf("enter first coodinates");
    scanf("%d %d",&x1,&y1);
    if(x1==0 && y1==0){
        printf("the points lie on origin");
    }
    else if(x1==0){
        printf("the points lie on y axis");
    }
    else if(y1==0){
        printf("the points lie on x axis");
    }
    else{
        printf("the points lie in quadrant");
    }
     return 0;
}