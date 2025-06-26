#include <iostream>
using namespace std;
int main (){
    int n;
    cin >> n;
    int a[n];
    int odd=0;
    int even=0;
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    for (int i=0; i<n; i++){
        if(a[i]%2==0){
            even++;
        }else{
            odd++;
        }
        }
    cout << "even=" << even << endl;
    cout << "odd=" << odd << endl;
    }