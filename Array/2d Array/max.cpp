#include<iostream>
using namespace std;

int getMax(int arr[][3], int row, int col) {
    int max = INT_MIN;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if(arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }
    return max;
}

int main() {
    int arr[][3] ={ 
        {1, 2, 3}, 
        {4, 23, 6},
        {7, 8, 0}
    };
    int row = 3; 
    int col = 3;
    cout<<getMax(arr, row, col);
}