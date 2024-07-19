#include<stdio.h>
int main(){
    int arr[7] = {-1,-2,-3,-4,-5,-19,-12};
    int max = arr[0] ;
    for(int i=0 ; i<=6 ; i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    printf("%d",max);
    return 0;
} 

// aik tareeka - #include<limits.h>
// int max = INT_MIN;