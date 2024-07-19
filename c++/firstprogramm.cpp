// #include<iostream>
// using namespace std;

// void f(int n,int sum){
//     if(n<1){
//         cout << sum;
//         return;
//     }
//     else{
//         f(n-1,sum+n);
//     }
// }
// int main(){
//     int n,sum=0;
//     cin >> n;
//     f(n,sum);
// }

#include<iostream>
using namespace std;

void f(int i,int arr[],int n){
    if(i>=n/2){
        return;
    }
    swap(arr[i], arr[n-i-1]);
    f(i+1,arr,n);
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    f(0,arr,n);
    for(int i=0; i<n; i++){
        cout << arr[i] << "\n";
    }
    return 0;
}