#include<iostream>
#include <deque>
#include <string>
using namespace std;

bool check(string a){
    deque<char> k;
    for(int x:a){
        k.push_back(x);
    }
    while(k.size()>1){
        if (k.front()!= k.back()){
            return false;
        }
        k.pop_front();
        k.pop_back();
    }
    return true;
}
int main(){
    string s;
    cin >> s;
    if(check(s)){
    cout << "it is a palindrome."<< endl;
    }else{
    cout << "it is not a palindrome."<< endl;
    }
    return 0;
}