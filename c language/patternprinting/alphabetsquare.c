#include<stdio.h>
int main(){
    int n;
    printf("enter number of rows : ");
    scanf("%d",&n);
    for(int i =1 ;  i<=n ; i++){
        int a = 1 ;
     for(int j = 1 ; j<=n ; j++){
        int d = a + 64 ;
        char ch = (char)d ;          // typecasting
            printf("%c ",ch);
            a++;
        }
        printf("\n");
    }

    return 0;
}

// alphabet square

// #include<stdio.h>
// int main(){
//     int a;
//     printf("enter no. of rows : ");
//     scanf("%d",&a);
//     for(int i='A'; i<='D' ; i++){
//         for(int j='A'; j<='D' ; j++){
//             printf("%c ",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }