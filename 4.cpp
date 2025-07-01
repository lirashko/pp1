#include <iostream>
#include <queue>
#include <string>
using namespace std;
int main(){
    cout << "endter 3 names: ";
    string name;
    queue<string> k;

    for(int i=0; i<3; ++i){
        cin >> name;
        k.push(name);
    }
    while(!k.empty()){
        cout << "serving: " << k.front() << endl;
        k.pop();
    }
    cout << endl;
}