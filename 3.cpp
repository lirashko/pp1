#include <iostream>
#include <string>
using namespace std;
string reverse(string s){
    string reversed = "";
    for(int i=s.length()-1; i>=0; --i){
        reversed += s[i];
    }
    return reversed;
}
int main(){
    string s;
    cin >> s;
    cout << reverse(s) << endl;
    return 0;
}