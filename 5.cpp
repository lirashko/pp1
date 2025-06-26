//✅ C++ If…Else
//Question: Input an integer and determine whether it is positive, negative or zero.
#include <iostream>
using namespace std;
int main(){
    int a;
    cin>> a;
    if(a>0){
        cout << "positive"<< endl;
        }else if(a=0){
        cout << "zero" << endl;
        }else{
            cout << "negative" << endl;
        }
}