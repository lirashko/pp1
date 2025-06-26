//✅ C++ Math
//Question: Input a positive integer and output its square root (keep two decimal places).
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
    int a;
    cin >> a;
    cout << fixed << setprecision(2);
    cout << "sqrt: " << sqrt(a) << endl;
}
