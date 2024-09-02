#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 3, 3, 3, 3, 3, 4, 4, 5, 6, 7, 8, 9};
    int target = 5;
    int n = 15;

    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (arr[mid] == target)
        {
            if (arr[mid - 1] != target)
            {
                cout << mid;
                break;
            }
            else
            {
                end = mid - 1;
            }
        }

        else if (arr[mid] < target)
            start = mid + 1;
        else
        {
            end = mid - 1;
        }
    }
}