#include<stdio.h>
int main(){
    int x1, y1, x2, y2, x3, y3;
    printf("enter first coodinates");
    scanf("%d %d",&x1,&y1);
    printf("\nenter second coodinates");
    scanf("%d %d",&x2,&y2);
    printf("enter third coodinates");
    scanf("%d %d",&x3,&y3);
    int m1 = (y2-y1)/x2-x1 ;
    int m2 = y3-y2/x3-x2 ;
    if(m1==m2){
        printf("the three points lie on straight line");
    }
    else{
        printf("the points are not collinear");
    }
    return 0;
}