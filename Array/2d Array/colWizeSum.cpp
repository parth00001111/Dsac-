#include<iostream>
using namespace std;

void printArray(int arr[][3], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j ++) {

            
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"column wise sum: "<<endl;
}

void colWiseSum(int arr[][3], int row, int col) {
    for (int i = 0; i < row; i++) {
        int sum = 0; 
        for (int j = 0; j < col; j ++) {

            
            sum += arr[j][i];
        }
        cout<<sum<<endl;
    }
}
int main() {
    int arr[][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int row = 3;
    int col = 3;
    printArray(arr, row, col);
    colWiseSum(arr, row, col);
}