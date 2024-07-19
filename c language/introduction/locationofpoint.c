#include<stdio.h>
int main(){
    int x,y;
    printf("enter x coordinate : ");
    scanf("%d",&x);
    printf("enter y coordinate : ");
    scanf("%d",&y);
    if(x == 0 && y == 0){
        printf("point lies on origin");
    }
    else if (x == 0){
        printf("point lies on y axis");
    }
    else if (y == 0){
        printf("point lies on x lies");
    }
    else{
        printf("point lies in quadrant");
    }
    return 0;
}