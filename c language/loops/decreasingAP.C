// 100 97 94 91 .............

#include<stdio.h>
int main(){
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    int a = 100;
    for(int i=1; i<=n; i++){
        printf("%d\n",a);
        a = a-3;
        if(a<0){
            break;
        }
    }
    return 0;
}