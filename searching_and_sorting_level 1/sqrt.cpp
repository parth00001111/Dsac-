#include <iostream>
#include <vector>
using namespace std;

class SquareRoot {
public:
    // Binary Search for integer part of square root
    int integerPart(vector<int> &arr, int target) {
        int s = 0, e = arr.size() - 1;
        int ans = -1;

        while (s <= e) {
            int mid = s + (e - s) / 2;
            int square = arr[mid] * arr[mid];

            if (square == target) {
                return arr[mid]; // Perfect square
            }
            else if (square < target) {
                ans = arr[mid];  // Store floor value
                s = mid + 1;
            }
            else {
                e = mid - 1;
            }
        }
        return ans;
    }
};

int main() {
    SquareRoot sr;
    int n;

    cout << "Enter number: ";
    cin >> n;

    // Fill vector from 0 to n
    vector<int> nums;
    for (int i = 0; i <= n; i++) {
        nums.push_back(i);
    }

    cout << "Integer square root of " << n << " is: " 
         << sr.integerPart(nums, n) << endl;

    return 0;
}
