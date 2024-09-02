// sort the array ones and zeros  program
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
    int i = 0;
    int j = v1.size() - 1;

    while (i < j)
    {

        if (v1[i] == 1 && v1[j] == 0)
        {
            int temp = v1[i];
            v1[i] = v1[j];
            v1[j] = temp;
            i++;
            j--;
        }
        else
        {
            if (v1[i] == 0)  i++;
            if (v1[j] == 1) j--;
        }
    }
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i];
    }

    return 0;
}
// #include <iostream>
// #include <vector>

// using namespace std;

// int main()
// {
//     vector<int> v1;
//     int n;

//     cout << "Enter the size: ";
//     cin >> n;

//     // Read n integers and add them to the vector
//     for (int i = 1; i <= n; i++)
//     {
//         int x;
//         cout << "Enter element " << i << ": ";
//         cin >> x;
//         v1.push_back(x);
//     }

//     // Initialize two pointers
//     int i = 0;
//     int j = v1.size() - 1;

//     // Sorting 0s and 1s
//     while (i < j)
//     {
//         if (v1[i] == 1 && v1[j] == 0)
//         {
//             // Swap elements
//             int temp = v1[i];
//             v1[i] = v1[j];
//             v1[j] = temp;
//             i++;
//             j--;
//         }
//         else
//         {
//             if (v1[i] == 0)
//             {
//                 i++;
//             }
//             if (v1[j] == 1)
//             {
//                 j--;
//             }
//         }
//     }

//     // Print the sorted array
//     cout << "Sorted array: ";
//     for (int i = 0; i < v1.size(); i++)
//     {
//         cout << v1[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }
