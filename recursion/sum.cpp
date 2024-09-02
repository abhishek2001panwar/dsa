#include <iostream>
using namespace std;
void sum1ton(int n)
{
    if (n == 0)
        return;

    // sum1ton(n + );
}
int sum1ton1(int n)
{
    if (n == 0)
        return 0;
    return n + sum1ton1(n - 1);
}
int main()
{

    cout << sum1ton1(10);
}