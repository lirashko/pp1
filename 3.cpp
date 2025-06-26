#include <iostream>
#include<map>
#include<sstream>
using namespace std;
int main(){
    string t ="this is a test this is only a test";
    map<string,int> m;
    stringstream ss(t);

    while(ss>>t){
        m[t]++;
    }
    for(auto i:m){
        cout << i.first << "->" << i.second << endl;
    }
    cout << endl;
}
