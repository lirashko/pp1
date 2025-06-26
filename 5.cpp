#include <iostream>
#include <queue>
#include <string>
using namespace std;
int main(){
    queue<string> k;
    string name;

    cout << "enter tne name: ";
    for (int i=0; i<5; ++i){
        cin >> name;
        k.push(name);
    }
    while(!k.empty()){
        cout << "Now serving:<" << k.front() << ">" << endl;
        k.pop();
    }
}