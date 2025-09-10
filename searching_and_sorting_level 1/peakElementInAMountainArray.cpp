#include<iostream>
#include<vector>
using namespace std;
class Solution {
    public: 
    int peakIndexMountainArray(vector<int>& arr) {
        int n = arr.size();
        int s = 0; 
        int e = n - 1;
        int mid = s + (e - s)/2;

        while(s < e) {
            if(arr[mid]< arr[mid + 1]) {
                s = mid + 1;
            }else { 
                //ya to B line pe ya to P element pe hu
                e = mid;
            }
            mid = s + (e - s)/2;
        }
        return arr[s];
    }
};

int main() {
  Solution mySolution;
  vector<int>arr = {10,20,50,40,30};
  int ans = mySolution.peakIndexMountainArray(arr);
  cout<<"The peak element in the array is: "<<ans<<endl;
  return 0;
}