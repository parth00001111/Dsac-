#include<iostream>
using namespace std;

int sumOfRows(int arr[][3], int row, int col) {
    for (int i = 0; i < row; i++) {
        int sum = 0; 
        for (int j = 0; j < col; j++) {
            sum += arr[i][j];
        }
        cout<<sum<< " ";
    }
    return -1;
}

int main() {
    int arr[][3] = {
        1,2,4,
        3,5,6,
        7,8,9
    };
    int row = 3;
    int col = 3;
    sumOfRows(arr, row, col);
    return 0;

}