// #include<stdio.h>
// int main(){
//     int arr[5] = {1,2,3,4,5};
//     int sum = 0;
//     for(int i=0 ; i<=4 ; i++){
//         sum = sum + arr[i];
//     }
//     printf("%d",sum);

//     return 0;
// }

// product of elements of array

#include<stdio.h>
int main(){
    int arr[5] = {1,2,3,4,5};
    int product = 1;
    for(int i=0 ; i<=4 ; i++){
        product = product*arr[i];
    }
    printf("%d",product);

    return 0;
}