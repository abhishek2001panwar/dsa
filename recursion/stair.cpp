#include<iostream>
using namespace std;


int power(int n  ){
     if(n ==1 ) return 1;
     if(n == 2) return 2;
    //  if(n == 3) return 3;
     return  power(n-1)* power(n-2);

}
int main(){
    int n;
    cout << "enter the number" << endl;
    cin >> n;
    cout << power(n);
   
}