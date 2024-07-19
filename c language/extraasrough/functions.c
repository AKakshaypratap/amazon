// // // function prototype(declaration),function defination, function call

// // #include<stdio.h>
// // // declaration/prototype
// // void printhello();

// // int main(){
// //     printhello(); // function call
// //     printhello();
// //     printhello();
// //     return 0;
// // }

// // //function defination
// // void printhello(){
// //     printf("hello!\n");
// // }

// //write 2 functions - one to print hello and second to print good bye.

// // #include<stdio.h>
// // void printhello();   // function declaration
// // void printgoodbye();

// // int main(){
// //     printhello();    // fucntion call
// //     printgoodbye();
// //     return 0;
// // }
// // // function defination

// // void printhello(){
// //     printf("hello!\n");
// // }
// // void printgoodbye(){
// //     printf("goodbye:)\n");
// // }

// // write a function that prints namaste if user as indian & bonjour if the use is french
// #include<stdio.h>
// void namaste();
// void bonjor();

// int main(){
//     printf("enter f for french & i for indian :");
//     char ch;
//     scanf("%c",&ch);
//     if (ch == 'i'){
//         namaste();
//     }
//     else{
//         bonjor();
//     }
//     return 0;
// }

// void namaste(){
//     printf("namaste\n");
// }
// void bonjor(){
//     printf("bonjor\n");
// }

//sum of two numbers 
#include<stdio.h>           //declaration
int sum(int a , int b);

int main(){
    int a,b;
    printf("enter number a : ");
    scanf("%d",&a);
    printf("enter number b : ");
    scanf("%d",&b);

    int s = sum(a,b);
    printf("sum is : %d \n",s);
    return 0;
}

int sum(int x, int y){
    return x + y;
}