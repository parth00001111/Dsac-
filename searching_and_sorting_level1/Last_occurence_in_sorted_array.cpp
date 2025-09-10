#include<iostream>
using namespace std;

int findLastOccurence(int arr[], int size, int target) {
    int start = 0;
    int end = size -1;
    int ans = -1;
    int mid = start/2 + end/2;
     while(start <= end) {
        if(arr[mid] == target) {
            ans = mid;
            start= mid + 1;
        }else if(arr[mid] > target) {
            start = mid + 1;
        }else if(arr[mid] < target) {
            end = mid - 1;
        }
        mid = start/2 + end/2;
     }
     return ans;
}

int main() {
    int arr[] = {30,30,30,30,30,30,30,70,80,90};
    int n = 9;
    int target = 30;
    int ansIndex = findLastOccurence(arr, n, target);
    if(ansIndex == -1) {
        cout<<"Element did not found"<<endl;
    }
    else {
        cout<<"Element found at index:"<< ansIndex<<endl;
    }
    return 0;

}