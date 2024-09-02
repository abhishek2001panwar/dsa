#include <iostream>
using namespace std;
// int fact1(int i, int n)
// {
//     if (i > n)
//         return 1;
//     cout << i << endl;
//     return fact1(i + 1, n);
// }
// int main()
// {
//     int n;
//     cout << "enter the number" << endl;
//     cin >> n;
//     cout << fact1(1, n);
// }

void print(int n ){
    if(n == 0) return; 
    cout << n << endl;
     print(n-1);
}
int main(){
     print(10);
}