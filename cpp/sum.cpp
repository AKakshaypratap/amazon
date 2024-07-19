// #include<iostream>
// using namespace std;
// int main(){
//     int a,b,sum ;
//     cout<<"enter first no. : ";
//     cin>>a;
//     cout<<"enter second no. : ";
//     cin>>b;
//     sum = a + b ;
//     cout<<"the sum is : "<<sum;
//     return 0;
// }

// swapping of 2 numbers
#include<iostream>
using namespace std;
int main(){
    int a,b,t;
    cout<<"a: ";
    cin>>a;
    cout<<"b: ";
    cin>>b;
    t = a;
    a = b;
    b = t;
    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b;
    return 0;
}