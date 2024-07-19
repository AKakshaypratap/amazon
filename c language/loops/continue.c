// WAP to print all the even numbers from 1 to 100

#include<stdio.h>
int main(){
    for(int i=1; i<=100; i++){
        if(i % 2 != 0){
            continue;  // ka mtlb skip kro us round ko
        }
        printf("%d ",i);
    }
    return 0;
}

// // WAP to print all the odd numbers from 1 to 100

// #include<stdio.h>
// int main(){
//     for(int i=1; i<=100; i++){
//         if(i % 2 != 0){
//             continue;  // ka mtlb skip kro us round ko
//         }
//         printf("%d ",i);
//     }
//     return 0;
// }