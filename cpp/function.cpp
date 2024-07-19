#include<iostream>
#include<cmath>     // include header file for sqrt and pow
using namespace std;
int add(int num1, int num2){
    int sum = num1 + num2;
    return sum;
}
int main(){
    int a,b;
    cout<<"enter the number a : ";
    cin>>a;
    cout<<"enter the number b : ";
    cin>>b;
    add(a,b);
    cout<<add(a,b)<<endl;

    // square root and power

    cout<<pow(2,3)<<endl;
    cout<<sqrt(24)<<endl;

    return 0;
}