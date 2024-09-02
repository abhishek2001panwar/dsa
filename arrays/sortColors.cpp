// {'Check'} if the given array is sorted or not
#include <iostream>
#include <vector>
#include <climits> // Include this for INT_MIN

using namespace std;

int main()
{
    vector<int> v1;
    int max = INT_MIN; // Use INT_MIN to initialize max to the smallest possible integer value
    int n;

    cout << "Enter the size: ";
    cin >> n;

    // Read n integers and add them to the vector
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        v1.push_back(x);
    }

    int i = 0 ;
    int j = v1.size()-1;

    while(i<=j){
        if(v1[i] == 0 && v1[j] == 1 || v1[j] == 2 ){
            int temp = v1[i];
            v1[i] = v1[j];
            v1[j] = temp ;
            j--;
            i++
        }
        else if(v1[i] == v1[j]){
            i++;

        }
        else if(v1[])
    }
   

    return 0;
}
