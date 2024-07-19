// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter number of rows : ");
//     scanf("%d",&n);
//     for(int i=1 ; i<=n ; i++){      // no. of lines/rows
//         for(int j=1 ; j<=i ; j++){  // no. of columns
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

#include<stdio.h>
int main(){
    int n;
    printf("enter number of rows : ");
    scanf("%d",&n);
    for(int i=1 ; i<=n ; i++){             // no. of lines/rows
        for(int j=1 ; j<=i ; j++){         // no. of columns
            printf("*");            
        }
        printf("\n");
    }    
    return 0;
}
