#include <iostream>
using namespace std;

int power(int n, int m)
{
    if (m == 0)
        return n;
    int ans;
    if (m % 2 == 0)
        ans = power(n, m / 2);
    if (m % 2 == 1)
        ans = power(n, m / 2) * m;
    return ans * ans;
}
int main()
{
    int n;
    cout << "enter the number" << endl;
    cin >> n;
    int m;
    cout << "enter the number" << endl;
    cin >> m;
    cout << power(n, m);
}