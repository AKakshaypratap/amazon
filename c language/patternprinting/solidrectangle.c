// // pattern mai *****
// //             *****
// //             *****

// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter number of rows : ");
//     scanf("%d",&n);
//     int m;
//     printf("enter number of columns : ");
//     scanf("%d",&m);
//     for(int i=1 ; i<=n ; i++){         // outer loop signifies the no. of lines
//         for(int i=1 ; i<=m ; i++){     // inner loop -> the no. of star in each line
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

#include<stdio.h>
int main(){
    int a; 
    printf("enter number of rows : ");
    scanf("%d",&a);
    int b; 
    printf("enter number of columns : ");
    scanf("%d",&b);
    for(int i=1 ; i<=a ; i++){
        for(int j=1 ; j<=b ; j++){
             printf("* ");
        }
         printf("\n"); 
    }
    return 0;
}