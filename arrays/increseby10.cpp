// Given an array of integers, change the value of all odd indexed elements to its second multiple
// and increment all even indexed values by 10.

#include <iostream>
#include <vector>
#include <climits> // Include this for INT_MIN

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
    for (int i = 0; i <= v1.size() - 1; i = i + 2)
    {
        cout << "increased  even indices by 10 :" << " " << v1[i] * 10 << endl ;
    }
    for (int j = 1; j <= v1.size() - 1; j = j + 2)
    {
        cout << "second multiple of odd indices  :" << " " << v1[j] * 2 << endl;
    }

    return 0;
}
