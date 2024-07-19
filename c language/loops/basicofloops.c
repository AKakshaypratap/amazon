// steps : 1) condition check, loop k andar aao, updation.

// #include<stdio.h>
// int main(){
//     for(int i=1 ; i<=9 ; i++){
//         printf("hello world\n");
//     }
//      return 0;
// }

// Q- print hello world n times

#include<stdio.h>
int main(){
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){       //initialisation, condition, upgradation
        printf("hello world\n");
    }
    return 0;
}