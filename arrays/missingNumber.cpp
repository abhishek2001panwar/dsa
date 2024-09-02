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
        for(int i = 1 ; i< v1.size() ; i++){
            if(v1[i] != i){
                cout << i << endl;
                break;
            }

        }
   
}
