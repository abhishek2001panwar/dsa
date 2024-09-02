
#include <iostream>
#include <vector>
#include <climits> // Include this for INT_MIN
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v1;
    int n;
    cout << "Enter the size: ";
    cin >> n;
    // Read n integers and add them to the vector
    for (int i = 1; i <= n; i++)
    {
        int x;
        cout << "enter the element : " << i << " ";
        cin >> x;
        v1.push_back(x);
    }
    int max = 0;
    for (int i = 0; i < v1.size() - 1; i++)
    {
        if (max < v1[i])
        {
            max = v1[i];
        }
    }
    int water = 0;
    for (int i = 0; i < v1.size(); i++)
    {
        water += max - v1[i];
    }
    cout << water;

    // previous greatest element
    // next greatest element
    // comparison of heights of if the water can be filled
}
