#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(0));
    vector <int> v;
    for(int i=0; i<10; i++){
        v.push_back(rand() %100 + 1);
    }
    cout << "random number: ";
    for(int x:v){
        cout << x << " ";
    }
    cout << endl;

    sort(v.begin(), v.end());

    cout << "sorted: ";
    for(int x:v){
        cout << x << " ";
    }
    cout << endl;

    auto a=max_element(v.begin(),v.end());
    auto b=min_element(v.begin(),v.end());
    cout << "max: " << *a << " min: " << *b << endl;

    auto e=unique(v.begin(), v.end());
    v.erase(e,v.end());
    
    cout << "remove duplicated: ";
    for(int x:v){
        cout << x << " ";
    }
    cout << endl;
    }