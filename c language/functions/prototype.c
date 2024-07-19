// #include<stdio.h>
// int main(){
//     void fun();
//     fun();
//     return 0;
// }
// void fun(){
//     printf("hello");
//     return;
// }
#include<stdio.h>
int main(){
    void india();     // prototype
    india();  
    return 0;  
}
void england(){
    printf("your are in england\n"); 
    return; // 7
}
void india(){
    printf("you are in india\n"); 
    void austrlia();      // prototype
    australia();  
    return; 
}
void australia(){
    printf("you are in australia\n");
    void england();       // prototype
    england(); 
    return; 
}