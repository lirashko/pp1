//✅ C++ Strings
//Question: Input a string, output its length and the result after reversing.
#include<iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    cout << "length: " << s.length() << endl;
    reverse(s.begin(), s.end());
    cout << "reversed: "<< s << endl;
}