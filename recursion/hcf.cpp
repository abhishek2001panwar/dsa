#include <iostream>
using namespace std;
int fib(int n, int m)
{
   if(n==0) return m;
  return fib(m % n, n);
}
int main()
{
    int n;
    cout << "enter the number" << endl;
    cin >> n;
    int m;
    cout << "enter the number" << endl;
    cin >> m;
    cout << fib(n, m);
}