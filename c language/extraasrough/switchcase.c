// #include<stdio.h>
// int main(){
//     int age;
//     printf("enter your age\n : ");
//     scanf("%d", &age);

//     switch (age)
//     {
//         case 3:
//         print("the age is 3");  
//         break;

//         case 13:
//         print("the age is 13");  
//         break;

//         case 23:
//         print("the age is 23");  
//         break;
    
//     default:
//     printf("age is not 3,13,23");
//         break;
//     }
//     return 0;
// }

#include <stdio.h>
int main(){
    int n ;
    int t ;
    printf("enter the number : ");
    scanf("%d",&n);
    for(int i=1 ; i<=10 ; i++){
        t = n * i ;
        printf("%d x %d = %d\n",n,i,t); 
    }
   return 0;
}