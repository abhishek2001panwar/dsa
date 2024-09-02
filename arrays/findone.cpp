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

    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        v1.push_back(x);
    }
    vector<int> v2(v1.size(), 0);

    for (int i = 0; i < v1.size(); i++)
    {
        v2[v1[i]]++;
    }
    for (int i = 0; i < v2.size(); i++)
    { 
        if(v2.size() == 1)
        {
            
            cout << 0;
        }
       else  if (v2[i] == 1)
        {
            cout << i << endl;
        }
    }

    return 0;
}
