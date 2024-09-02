#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int arr[] = {1, 9, 3, 6, 5};
    int n = 5;
    for (int i = 0; i < n - 1; i++)
    {
        int min = INT_MAX;
        int minidx = i;  // Initialize minidx to the current index i
        for (int j = i; j < n ; j++)
        {
            if(arr[j] < min)
            {
                min = arr[j];
                minidx = j;  // Update minidx only when a new minimum is found
            }
        }

        // Swap the current element with the minimum element found
        swap(arr[i] , arr[minidx]);
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
