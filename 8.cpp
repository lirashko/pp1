//✅ C++ For Loop
//Topic: Output all even numbers from 1 to n.
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i=1; i<=n; i++){
        if(n%2==0){
            cout << i << " ";
        }
    }
}