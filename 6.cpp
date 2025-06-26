//✅ C++ Switch
//Question: Input a number 1~3 and output the corresponding day of the week.
#include <iostream>
using namespace std;
int main(){
    int day;
    cin >> day;
    switch(day){
        case 1:cout << "monday" << endl; break;
        case 2:cout << "tuesday"<< endl; break;
        case 3:cout << "wednesday"<< endl; break;
    }
}