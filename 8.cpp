#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int w;
    float h,BMI;
    cin >> w >> h;
    BMI=w/(h*h);
    cout << fixed<< setprecision(2);
    cout << "Your BMI is "<<BMI <<endl ;
    return 0 ;
}