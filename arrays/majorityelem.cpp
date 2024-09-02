
// Count the number of elements strictly greater than x.
#include <iostream>
#include <vector>
#include <string>
#include<algorithm>
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

    for (int i = 0; i <= v1.size() - 1; i++)
    {
        sort(v1.begin(), v1.end());
        cout << v1[v1.size() / 2];

        break;
    }
}