//✅ C++ While Loop
//Question: Input a positive integer n, and output the numbers from n to 1 in reverse order.
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    while (n>=1){
        cout << n << " ";
        n--;
    }
}