#include<iostream>
using namespace std;
int fact(int n){
    if(n == 0) return  1  ; 
    cout << n ;
    return fact(n-1);
}
int main(){
    int n ;
    cout << "enter the number" << endl ;
    cin >> n;
    cout << fact(n);
}