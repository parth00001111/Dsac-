#include <iostream>
using namespace std;

int getQuotient(int divisor, int dividant) {
    int s = 0;
    int e = dividant;
    int ans = -1;

    
    while(s <= e) {
        int mid = s + (e - s) / 2;
       if(mid * divisor == dividant) {
        return mid;
       }
       else if(mid * divisor < dividant) {
        ans = mid;
        s = mid + 1;
       }
       else { 
        e = mid - 1;
       }
    }
    return ans;
}

int main() {
    int divisor = -1;
    int dividant = 29;

    int ans = getQuotient(divisor, dividant);

    if (divisor > 0 && dividant < 0 || divisor < 0 && dividant > 0) {
        ans = 0 - ans;
    }

    cout<<"Final answer is : "<<ans<<endl;
    return 0;
}