#include<iostream>
#include <set>
using namespace std;
int main(){
    set<int> s;
    int x;

    cout << "enter 10 number: ";
    for(int i=0; i<10; i++){
        cin >> x;
        s.insert(x);
    }
    cout << "find a number: ";
    cin >> x;

    if(s.find(x)!=s.end()) cout << "found";
    else cout << "not found";
    cout << endl;

    cout << "set elements: ";
    for(auto i=s.begin(); i!=s.end(); i++){
        cout << *i << " ";
    }
    cout << endl;

    return 0;
}
