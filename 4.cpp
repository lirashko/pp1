//✅ C++ Booleans
//Question: Enter two integers and determine whether they are equal and whether they are both positive.
#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin >> a >> b;
    cout <<"equal: "<< (a>0 && b>0) << endl;
    cout << "bothpositives."<< (a==b) << endl;
}