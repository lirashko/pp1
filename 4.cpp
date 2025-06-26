#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool check(string s){
    stack <char> k;

    for(char c:s){
        if(c=='('){
            k.push(c);
        }else if(c==')'){
            if(k.empty()) return false;
            k.pop();
        }
    }
    return k.empty();
}

    int main(){
        string x;
        cin >> x;
        
        if(check(x)){
            cout << "correct" << endl;
        }else{
            cout << "incorrect" << endl;
        }
        return 0;
    }
