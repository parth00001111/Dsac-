#include <iostream> 
using namespace std;

int main () {
    int arr[10];

    for (int i = 0; i < 9; i++) {
        cin>> arr[i];
        cout<< endl;
    }
    for (int  i = 0; i < 9; i++) {
        
        cout<<  2*arr[i];
    }

    return 0;
}