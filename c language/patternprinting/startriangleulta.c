// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter number of rows : ");
//     scanf("%d",&n);
//     for(int i=1 ; i<=n ; i++){      // no. of lines/rows
//         for(int j=1 ; j<=n+1-i ; j++){  // no. of columns
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// // row=1  ***  column=3    sum=4    i+j=4 /   i+j=(n+1)
// // row=2  **   column=2    sum=4
// // row=3  *    column=1    sum=4     j=n+1-i

#include<stdio.h>
int main(){
    int n ; 
    printf("enter number of rows : ");
    scanf("%d",&n);
    for(int i=1 ; i<=n ; i++){
        for(int j=1 ; j<=n+1-i ; j++){
            printf("*");
        }
        printf("\n");
        }
    return 0;
}