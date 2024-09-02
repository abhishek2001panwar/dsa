#include <iostream>
using namespace std;
#include <vector>
void combinationSum(int n, int arr[], int target, vector<int> v, int index)
{
    if (target == 0)
    {
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
        return;
    }

    if (target < 0)
        return;
    for (int i = index; i < n; i++)
    {
        v.push_back(arr[i]);
        combinationSum(n, arr, target - arr[i], v, i);
        v.pop_back();
    }
}
int main()
{
    int arr[] = {2, 3, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 7;
    vector<int> v;
    combinationSum(n, arr, target, v, 0);
    return 0;
}