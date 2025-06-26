#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int C;
    double F;
    cin >> C ;
    F=(C*9/5)+32;
    cout << fixed << setprecision(1);
    cout << "Temperature in Fehrenhrit: "<< F <<endl ;
    return 0 ;
}