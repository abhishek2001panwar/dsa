#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int target = 8;
    int n = 9;

    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (arr[mid] == target)
        {
            cout << arr[mid - 1];
            break;
        }

        else if (arr[mid] < target)
            start = mid + 1;
        else
        {
            end = mid - 1;
            cout << end;
        }
    }
}