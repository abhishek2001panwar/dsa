#include <iostream>
#include <vector>
using namespace std;
int binary(vector<int> v, int start, int end, int target)
{
    if (start > end)
    {
        cout << "Element not found";
        return 0;
    }
    int mid = (start + end) / 2;
    if (v[mid] == target)
    {
        cout << "Element found at index " << mid;
        return 0;
    }
    else if (v[mid] > target)
    {
        binary(v, start, mid - 1, target);
    }
    else
    {
        binary(v, mid + 1, end, target);
    }
    return 0;
    
}

int main()
{
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int target;
    cin >> target;
    binary(v, 0, n - 1, target);
}