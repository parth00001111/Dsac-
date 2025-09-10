#include<iostream>
using namespace std;

int findFirstOccurence(int arr[], int size, int target) {
    int start = 0; 
    int end = size - 1;
    int mid = start/2 + end/2;
    int ans = -1;
    while (start <= end) {
        if(arr[mid] == target) {
            ans = mid;
            end = mid - 1;
        }else if(target > arr[mid]) {
            start = mid + 1;
        }else if ( target < arr[mid]) {
            end = mid - 1;
        }
        mid = (start + end)/2;
    }
    return ans;
}

int main() {
    int arr[] = {30,30,30,30,30,30,30,70,80,90};
    int n = 9;
    int target = 30;
    int ansIndex = findFirstOccurence(arr, n, target);
    if(ansIndex == -1) {
        cout<<"Element did not found"<<endl;
    }
    else {
        cout<<"Element found at index:"<< ansIndex<<endl;
    }
    return 0;

}