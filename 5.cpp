#include <iostream>
using namespace std;
int main (){
    int n;
    cin >> n;
    int a[n];
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    int t;
    cin >> t;
    int index;
    for (int i=0; i<n; i++){
        if(a[i]==t){
            index=i;
            cout << "Found at index "<< index << endl;
            return 0;
        }
    }
    cout << "Not Found.";
}