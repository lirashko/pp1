#include <iostream>
#include <deque>
using namespace std;
int main(){
    deque<int> k;
    k.push_front (10);
    k.push_back (20);
    k.push_front (5);

    cout << "Deque contains: ";
    for(int x:k){
        cout << x<< " ";
    }
    cout << endl;
    int back=k.back();
    k.pop_back();
    cout << "Pop back: " << back << endl;

    int front=k.front();
    k.pop_front();
    cout << "Pop front: " << front << endl;

    for(int x:k){
        cout << "Remaining: "<< x;
    }

    cout << endl;

}