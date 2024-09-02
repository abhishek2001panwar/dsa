#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter the array size: ";
    cin >> n;
    vector<int> v1;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v1.push_back(x);
    }

    int flag = false;
    int sum = 1;
    for (int i = 0; i < v1.size() - 1; i++)
    {
        for (int j = i + 1; j < v1.size(); j++)
        {
            if (v1[i] == v1[j])
            {
                flag = true;
                sum  =  v1[i];
            }
        }
    }
    cout << "Count: " << flag;
    cout << endl;
        cout << "value: " << sum;



    return 0;
}
