// #include<stdio.h>
// void greet(){
//     printf("good morning\n");
//     printf("how are u ?\n");
//     return;
// }
// int main(){
//     greet();
//     greet();
//     greet();
//     return 0;
// }

#include<stdio.h>
void england(){
    printf("your are in england\n"); // 6
    return; // 7
}
void australia(){
    printf("you are in australia\n"); // 4
    england();  // calling england // 5
    return;  // 8
}
void india(){
    printf("you are in india\n");    //  2
    australia();  // calling australia // 3
    return;   // 9
}
int main(){
    india();  // calling india - 1
    return 0;  // 10
}

