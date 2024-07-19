// arithmetic, relational, logical, assignment, bitwise, misc operators;
#include<iostream>
using namespace std;
int main(){
    int num1 = 12;  //1100
    int num2 = 4;   //0100  

    cout<<num1 + num2<<endl;
    cout<<num1 - num2<<endl;
    cout<<num1 * num2<<endl;
    cout<<num1 / num2<<endl;
    cout<<num1 % num2<<endl;

    bool exp1 = true;
    bool exp2 = false;

    // logical operator
    cout<<(exp1 && exp2)<<endl;
    cout<<(exp1 || exp2)<<endl;
    cout<<(!exp1)<<endl;

    //assignment operator
    num1 += 3;
    cout<<"num1: "<<num1<<endl;
    num2 -= 2;
    cout<<"num2: "<<num2<<endl;

    //biwise operator
    //left shift - when a<<b then a*2 raise to b
    //right shift - when a>>b then a/2 raise to b
    // here num1 became - 15(1111) and num2 became - 2(0010)
    cout<<(num1<<1)<<endl;
    cout<<(num1>>1)<<endl;

    cout<<(num1&num2)<<endl;    //0010 = 2
    cout<<(num1|num2)<<endl;    //1111 = 15
    return 0;
}