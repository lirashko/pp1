#include<iostream>
#include <string>
#include<stack>
using namespace std;

int main(){
    string s;
    cin >> s;
    stack<char> k;
    for(int i=0; i<s.length(); i++){
        k.push(s[i]); 
    }
    while(!k.empty()){
        cout << k.top();
        k.pop();
    }
    cout << endl;
}