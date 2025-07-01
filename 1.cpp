#include <iostream>
#include <stack>
using namespace std;

int main(){
    int a[5];
    stack<int> k;
    for(int i=0; i<5; i++){
        cin >> a[i];
    }
    for(int i=0; i<5; i++){
        k.push(a[i]);
    }
    for(int i=0; i<5; i++){
        a[i]=k.top();
        k.pop();
    }
    for(int i=0; i<5; i++){
        cout << a[i] << " ";
    }
    cout << endl;
    
}