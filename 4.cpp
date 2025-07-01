#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    vector<int> n;
    n.push_back(4);
    n.push_back(1);
    n.push_back(2);
    n.push_back(4);
    n.push_back(6);
    n.push_back(4);
    n.push_back(3);
    int value=4;
    int result=count(n.begin(),n.end(),value);
    int a=*min_element(n.begin(),n.end());
    int b=*max_element(n.begin(),n.end());

    cout << "count of " << value << ": " << result<< endl;
    cout << "min: "<< a << endl;
    cout << "max: "<< b << endl;
}
