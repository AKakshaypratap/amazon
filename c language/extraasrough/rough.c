// // // // // // // // // // // // #include<stdio.h>
// // // // // // // // // // // // int main(){
// // // // // // // // // // // //     char ch; 
// // // // // // // // // // // //     printf("enter character : ");
// // // // // // // // // // // //     scanf("%c",&ch);
// // // // // // // // // // // //     if(ch >= 'A' && ch <= 'Z'){
// // // // // // // // // // // //         printf("upper case");
// // // // // // // // // // // //     }
// // // // // // // // // // // //     else if(ch >= 'a' && ch <= 'z'){
// // // // // // // // // // // //         printf("lower case");
// // // // // // // // // // // //     }
// // // // // // // // // // // // else{
// // // // // // // // // // // //     printf("not a english letter");
// // // // // // // // // // // // }

// // // // // // // // // // // // //     return 0;
// // // // // // // // // // // // // }

// // // // // // // // // // // // #include <stdio.h>
// // // // // // // // // // // // int main(){
// // // // // // // // // // // //     int n;
// // // // // // // // // // // //     printf("enter a number : ");
// // // // // // // // // // // //     scanf("%d",&n);
// // // // // // // // // // // //     int i=1;
// // // // // // // // // // // //     while(i<=n) {
// // // // // // // // // // // //     printf("%d ",i);
// // // // // // // // // // // //     i++;
// // // // // // // // // // // //     }
    
// // // // // // // // // // // //     return 0;
// // // // // // // // // // // // }

// // // // // // // // // // // #include<stdio.h>
// // // // // // // // // // // int main(){
// // // // // // // // // // //     int n;
// // // // // // // // // // //     printf("enter a number : ");
// // // // // // // // // // //     scanf("%d",&n);
// // // // // // // // // // //     int i=1;
// // // // // // // // // // //     do{
// // // // // // // // // // //         printf("%d ",i);
// // // // // // // // // // //         i++;
// // // // // // // // // // //     }
// // // // // // // // // // //     while(i<=5);
// // // // // // // // // // //     return 0;
// // // // // // // // // // // }

// // // // // // // // // // #include<stdio.h>
// // // // // // // // // // int main(){
// // // // // // // // // //     int n;
// // // // // // // // // //     printf("enter the number : ");
// // // // // // // // // //     scanf("%d",&n);
// // // // // // // // // //     int sum = 0;
// // // // // // // // // //     for(int i=1 ; i<=n ; i++){
// // // // // // // // // //         sum = sum + i;
       
// // // // // // // // // //     }
// // // // // // // // // //      printf("the sum is : %d",sum);
// // // // // // // // // //     return 0;
// // // // // // // // // // }

// // // // // // // // // #include<stdio.h>
// // // // // // // // // int main(){
// // // // // // // // //     int n;
// // // // // // // // //     printf("enter a number : ");
// // // // // // // // //     scanf("%d",&n);
    
// // // // // // // // //     for(int i=1 ; i<=10 ; i++){
// // // // // // // // //          printf("%d x %d = %d\n",i,n,i*n);
// // // // // // // // //          } 
    
// // // // // // // // //     return 0;
// // // // // // // // // }

// // // // // // // // #include<stdio.h>
// // // // // // // // int main(){
// // // // // // // //     int n;
// // // // // // // //     do{
// // // // // // // //         printf("enter a number : ");
// // // // // // // //         scanf("%d",&n);
        

// // // // // // // //         if (n % 2 != 0){
// // // // // // // //             break;
// // // // // // // //         }
// // // // // // // //     }while(1);
// // // // // // // //     printf("odd no. is entered ");
// // // // // // // //     return 0;
// // // // // // // // }

// // // // // // // #include<stdio.h>
// // // // // // // int main(){
// // // // // // //     int n;
// // // // // // //     do{
// // // // // // //         printf("enter a number : ");
// // // // // // //         scanf ("%d",&n);

// // // // // // //         if(n % 7 == 0){
// // // // // // //             break;
// // // // // // //         }
// // // // // // //     }while(1);
// // // // // // //     printf("multiple of 7");
// // // // // // //     return 0;
// // // // // // // }
// // // // // // #include<stdio.h>
// // // // // // int main(){
// // // // // //     int n;
// // // // // //     printf("enter n : ");
// // // // // //     scanf("%d",&n);
// // // // // //     for(int i=1 ; i<=n ; i++){
// // // // // //         if (i==6){
// // // // // //             continue;
// // // // // //         }
// // // // // //         printf("%d ",i);
// // // // // //     }
// // // // // //     return 0;
// // // // // // }

// // // // // #include<stdio.h>
// // // // // int main(){
// // // // //     int n;
// // // // //     printf("enter n : ");
// // // // //     scanf("%d",&n);
// // // // //     int fact = 1; 
// // // // //     for(int i=1 ; i<=n ; i++){
// // // // //         fact = fact * i;
// // // // //          }
// // // // //     printf("the factorial of n is : %d ",fact);
    
// // // // //     return 0;
// // // // // }

// // // // #include<stdio.h>
// // // // int main(){
// // // //     int n;
// // // //     printf("enter a number : ");
// // // //     scanf("%d",&n);
// // // //     for(int i=10 ; i>=1 ; i--){
// // // //         printf("%d",i*n);
// // // //     }
// // // //     return 0;
// // // // }

// // // #include<stdio.h>
// // // int main(){
    
// // //     int sum = 0;
// // //     for(int i=5 ; i<=50 ; i++){
// // //         sum = sum + i;
        
// // //     }
// // //     printf("the sum from 5 to 50 is %d",sum);
// // //     return 0;
// // // }

// #include<stdio.h>
// int main(){
//     int n ;
//     char d;
//     printf("enter a number : ");
//     scanf("%d",&n);
//     for(int i=1 ; i<=n ; i++){
//         for(int j=1 ; j<=i ; j++){
//             printf("%c",j+64);
//         }
//          printf("\n");
//     }
//      return 0;
// }
// // #include<stdio.h>
// // int main(){
// //     int num, rev=0 ,rem , n;
// //     printf("enterr a number : ");
// //     scanf("%d",&num);
// //     n = num;
// //     while(num != 0){
// //         rem = num % 10 ;
// //         rev = rev*10 + rem ;
// //         num = num/10 ;
// //     }
// //     printf("%d",rev);
// //     return 0;
// // }

#include<stdio.h>
int main(){
    int n, n1=0 , n2=1 ,n3 ;
    printf("enter the limit : ");
    scanf ("%d",&n);
    printf("\n %d %d",n1 ,n2);
    for (int i=2 ; i<n ; ++i){
        n3 = n1 + n2 ;
        printf("%d",n3);
        n1 = n2 ;
        n2 = n3 ;

    }
    return 0;
}