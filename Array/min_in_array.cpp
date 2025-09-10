#include <iostream> 

using namespace std;

int minimum(int arr[], int size) {
    int mini = arr[0];
    for (int i = 0; i < size; i++) {
        if(arr[i] < mini)
        mini = arr[i];
    }
    return mini;
}

int main() {
    int arr[] = {3,4,2,5,6};
    int size = 5; 
    cout<< minimum(arr, size);
    return 0;
}
