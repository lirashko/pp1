//✅ C++ Operators
//Question: Input two integers and output their sum, difference, product, quotient, and remainder.
#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    cout << "sum: " << n+m << endl;
    cout << "difference: " << n-m << endl;
    cout << "product: "<< n*m << endl;
    cout << "quotient: "<< n/m << endl;
    cout << "remainder: "<< n%m << endl;
}