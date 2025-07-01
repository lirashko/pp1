#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> k;

    for(int i=0; i<5; ++i){
        int x;
        cin >> x;
        k.push(x);
    }
    while(!k.empty()){
        cout << k.front() << " ";
        k.pop();
    }
    cout << endl;

}