// palindrome program
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

    bool flag = false;

   for(int i = 0 ; i  <= v1.size()-1 ; i++){
     for(int j = v1.size()-1 ; j >=0 ; j++){
        if(v1[i] != v1[j]){
            break;
            cout << "not a palindrome";
        }else{
            flag = true;
        }
     }
   }
   if(flag == true){
    cout << "palindrome";
   
    }

    return 0;
}