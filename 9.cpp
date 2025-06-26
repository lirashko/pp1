#include <iostream>
using namespace std;
int main(){
    int a[4][4];
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cin >> a[i][j];
        }
    }
    cout << "main: ";
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            if(i==j){
                cout <<a[i][j]<<" ";
            }
        }
    }
    cout << endl;
    cout << "secondary: ";
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            if(i+j==3){
                cout <<a[i][j]<<" ";
            }
        }
    }
    cout << endl;
}
//a[0][0] a[1][1] a[2][2] a[3][3]
//a[0][3] a[1][2] a[2][1] a[3][0]