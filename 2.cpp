#include <iostream>
using namespace std;
int fibonacci(int n){
    if(n==0) return 0;
    else if(n==1) return 1;
    else return fibonacci(n-1)+fibonacci(n-2);
}
int main(){
    int n;
    cin >> n;
    int fac=1;
    cout << fibonacci(n) << endl;
}
//a[0]=0 a[1]=1 a[2]=1 a[3]=2
