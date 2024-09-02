
// Count the number of elements strictly greater than x.
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v1;

    int n;
    cout << "enter the size";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        v1.push_back(x);
    }
    int target;
    cout << "enter target";
    cin >> target;

    for (int i = 0; i <= v1.size() - 1; i++)
    {
        if (v1[i] > target)
        {
            cout << v1[i] << " ";
        }
    }
}