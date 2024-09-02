// Find the unique number in a given Array where all the elements are being repeated twice with one
// value being unique.
// [2, 3, 5, 4, 5, 3, 4]
// output 2
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

    for (int i = 0; i <= v1.size(); i++)
    {
        bool flag = true;

        for (int j = 0; j <= v1.size(); j++)
        {
            if (j == i)
            {

                continue;
            }
            if (v1[i] == v1[j])
            {

                flag == false;
                break;
            }
        }
        if (flag == true)
        {
            cout << v1[i] << flag ;
            break;
        }
    }

    return 0;
}
