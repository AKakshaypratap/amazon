// kyuki j ki koi value nhi di hai to use , garbage value samajh leta hai or code
// ka loop hi run nhi hoga

// #include<stdio.h>
// int main(){
//     int j;
//     while(j<=10){
//         printf("\n%d",j);
//         j = j+1;
//     }
//     return 0;
// }

// question -2 - post and pre increment or decrement
// #include<stdio.h>
// int main(){
//     int x = 4,y,z;
//     y = --x;        // pehle decrement then use x
//     z = x--;        // use x , then decrement
//     printf("\n%d %d %d",x,y,z);
//     return 0;
// }

//question - 3
// #include<stdio.h>
// int main(){
//     int x=4,y=0,z;
//     while(x>=0){
//         x--;
//         y++;
//         if(x==y)
//         continue;
//         else
//         printf("\n%d %d",x,y); // iska answer sirf 3 1 hai , baaki z ki garbage value hai
//     }
//     return 0;
// }

// question - 4
#include<stdio.h>
int main(){
    int x = 4,y = 0,z;
    while(x>=0){
        if(x == y)
        break;
        else
        printf("\n %d %d",x,y);
        x--;
        y++;
    }
    return 0;
}