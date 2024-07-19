#include<stdio.h>
int main(){
    // int arr[5] = {2,4,5,6,7};  // syntax and declaration
    // printf("%d",arr[2]);
    // char a[6] = {'a','k','s','h','a','y'};
    // for(int i=0 ; i<=5 ; i++)
    // printf("%c",a[i]);
     

    // int arr[4];
    // printf("enter first element : "); // taking input from user
    // scanf("%d",&arr[0]);
    // printf("enter second element : ");
    // scanf("%d",&arr[1]);

    // printf("%d",arr[1]);

    int arr[5];
    for(int i=0 ; i<=4 ; i++){
    printf("enter element %d :",i+1);
    scanf("%d",&arr[i]);
    }
    for(int i=0 ; i<=4 ; i++){
        printf("%d",arr[i]);
    }
    return 0;

}