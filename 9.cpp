//✅ C++ Break/Continue
//Question: Input an integer n, and output all numbers from 1 to n that are not multiples of 3; stop outputting if 13 is encountered.
#include <iostream>
using namespace std;
int main (){
    int n;
    cin >> n;
    for(int i=1; i<=n; i++){
        if(i==13) break;
        if(i%3==0) continue;
        cout << i << " ";
    }
}