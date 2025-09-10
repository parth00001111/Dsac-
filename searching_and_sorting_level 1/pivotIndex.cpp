#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public:
    int findPivotIndex(vector<int> &arr) {
        int n = arr.size();
        int s = 0; 
        int e = n - 1;
        

        while(s <= e) {
           int mid = s + (e - s)/2;
            if(s == e) {
                return s;
            }
            if(arr[mid] > arr[mid + 1]) {
                return mid;
            }else if (arr[mid] < arr[mid - 1]) {
                return mid - 1;
            }else if(arr[s] >= arr[mid]) {
                e = mid - 1;
            }else {
                s = mid + 1;
            }
        }
        return -1;

    }
};
int binarySearch(vector<int>&arr, int s, int e, int target){

    while(s <= e) {
        int mid = s/2 + e/2;
        if(arr[mid] == target) {
            return mid;
        }
        if(target > arr[mid]) {
            s = mid + 1;
        }else {
            e = mid - 1;
        }
        
    }
    return -1;
}
int search(vector<int>&arr, int target) {
    Solution mySolution;

    int ans = -1;
    int n = arr.size();
    int pivotIndex = mySolution.findPivotIndex(arr);
    if(target >= arr[0] && target <= arr[pivotIndex]) {
        ans = binarySearch(arr, 0, pivotIndex, target);
    }else {
        ans = binarySearch(arr, pivotIndex + 1, n - 1, target);
    }
    return ans;
}

int main() {
    Solution mySolution;
    vector<int>v;
    v.push_back(12);
    v.push_back(14);
    v.push_back(16);
    v.push_back(2);
    v.push_back(4);
    v.push_back(6);
    v.push_back(8);
    v.push_back(10);
    int pivotIndex = mySolution.findPivotIndex(v);
    cout<<"pivot index: "<<pivotIndex;
    return 0;
}