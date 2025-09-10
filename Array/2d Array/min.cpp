#include<iostream>
#include<climits>
using namespace std;

int minArray(int arr[][3], int row, int col) {
    int maxx = INT_MAX;

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if(arr[i][j] < maxx) {
                maxx = arr[i][j];
            }
        }
        return maxx;
    }
    return -1;
}

int main() {
    int arr[][3] = { 
        77,2,3,
        4,5,6,
        7,8,9
    };
    int row = 3; 
    int col = 3;
    cout<<minArray(arr, row, col);
    return 0;
}