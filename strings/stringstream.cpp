
#include <iostream>
#include <climits>
#include <sstream>
#include <vector>
using namespace std;

int main()
{
string s1 = " hello world" ;

stringstream ss(s1);
string temp;
vector<string> v;
while(ss>>temp){
    v.push_back(temp);
}
for(int i =0 ; i<v.size() ; i++){
    cout << v[i] <<  " ";
}
}
