#include<iostream>
using namespace std;

void reverseArray(int arr[], int size) {
    int right = size - 1;
    int left = 0;
  
    while (left <= right) {
        swap(arr[left], arr[right]);
        right --;
        left ++;
    }
    for (int i = 0; i < size; i++) {
        cout<< arr[i]<< " ";
    }
}

int main() {
    int arr[6] = {1,2,3,4,5};
   int size = 5;

    reverseArray(arr, size);
    return 0;
}