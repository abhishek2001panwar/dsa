#include <iostream>
#include <string>
using namespace std;
bool palindrome( string str , char left , char right){
     if(left != right) return true;
     else return palindrome(str, left++ , right--);
}
int main()
{
    string str = "racecar";
    char left = str[0];
    char right = str.length()-1;
   cout << palindrome(str , left , right );
}