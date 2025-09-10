#include<iostream>
using namespace std;

void sortZeroAndOne(int arr[], int n) {
    int countOne = 0; 
    int countZero = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            countZero++;
            if (arr[i] == 1) {
                countOne++;
            }
        }
    }
    int i; 
    for (i = 0; i < countZero; i++) {
        arr[i] = 0;
    }
    for (int j = i; j < n; j++) {
        arr[j] = 1;
    }
}

int main() {
    int arr[] = {0, 1, 1, 1, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0};
    int n = sizeof(arr)/sizeof(int);
    sortZeroAndOne(arr, n);
    for (int i = 0; i < n; i++) {
        cout<<arr[i]<<", ";
    }
    return 0;
}