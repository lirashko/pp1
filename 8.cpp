#include <iostream>
using namespace std;
int main(){
    int a[4][4];

    for (int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cin >> a[i][j];
        }
    }
    int maxSum= -1e9;
    int row= -1;

    for (int i=0; i<4; i++){
        int rowSum=0;
        for(int j=0; j<4; j++){
            rowSum += a[i][j];
            }
        if(maxSum<rowSum){
            maxSum= rowSum;
            row = i;
            }
        }
    cout << "Row " << row+1 << " has the maximum sum: " << maxSum << endl;
    cout << endl;

    return 0;
}