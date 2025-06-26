#include <iostream>
#include <vector>
using namespace std;
double average(const vector<int>& v){
    int sum=0;
    for(auto it=v.begin(); it != v.end(); ++it){
        sum+=*it;
    }
    if (v.empty()) return 0.0;
    return static_cast<double>(sum) /v.size(); 
}
int main(){
    vector<int> v;
    int n;
    cin >> n;
    int a;
    for(int i=0; i<n; ++i){
        cin >> a;
        v.push_back(a);
    }
    double result =average(v);
    cout << "average= " << result << endl;
    return 0;
}