//GP 100 50 25 12.5 ...............

#include<stdio.h>
int main(){
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    float a = 100.0;
    for(int i=1; i<=n; i++){
        printf("%f\n",a);
        a = a*(0.5);
        if(a<1){
            break;
        }
    }

    return 0;
}