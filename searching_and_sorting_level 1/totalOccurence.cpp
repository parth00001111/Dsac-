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

int totalOccurence(int arr[], int size, int target) {
    int first = findLastOccurence(arr, size, target);
    int last = findFirstOccurence(arr, size, target);
    
    int totalOccurence =(first - last) + 1;
    return totalOccurence; 
}

int main() {
    int arr[] = {10,30,30,30,30,30,30,70,80,90};
    int n = 9;
    int target = 30;
    cout<<"Total occurence of a number is: "<<totalOccurence(arr, n, target);
    return 0;

}
