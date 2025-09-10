#include<iostream>
using namespace std;

int findElement(int arr[], int size) {
    int start = 0; 
    int end = size - 1;
   int mid = start + (end - start) / 2;

    int ans = -1;
    while(start<=end) {
        int diff = arr[mid] - mid;

        if(diff == 1) {
            start = mid + 1;

        }else { 
            ans = mid;
            end = mid -1;
        }
        mid = start/2 + end/2;
        if((ans + 1) == 0) {
            return size + 1;
        }
    }
    return ans + 1;
}
int main() {
    int arr[] = {1,2,3,4,6,7,8, 9};
    int n = 8;
   
    int ansIndex = findElement(arr, n);
    cout<<"The missing element is : "<<ansIndex<<endl;
    return 0;

}