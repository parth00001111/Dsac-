#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int target) {
    int start = 0; 
    int end = n-1;
    //there is some flaw in the below line
    int mid = (start + end)/2;

    while (start <= end) {
        //found
        if(arr[mid] == target) {
            //return index of the found element
            return mid;
        }
        else if(target > arr[mid]) {
            //right me jao
            start = mid + 1;
        }
        else if(target < arr[mid]) {
            // left pe jao
            end = mid - 1;
        }
        //mid update
        mid = (start + end)/2;
    }
    //agar yaha tak aye ho toh iska matlab elment nahi mila tumko
    return -1;
}

int main() {
    int arr[] = {10, 20,30,40,50,60,70,80,90};
    int target = 90;
    int n = 9;
    int ansIndex = binarySearch(arr, n, target);
    if(ansIndex == -1) {
        cout<<"Element not found"<<endl;
    }else {
        cout<<"Element found at Index: "<<ansIndex;
    }
    return 0;
}