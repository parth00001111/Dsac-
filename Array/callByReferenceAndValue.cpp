#include <iostream>
using namespace std;

// int main() {
//     int n = 5; 
//     int &k = n;
//     cout<< n<< endl;
//     cout<< k;
//     return 0;
// }

int incrementByOne(int n) {
    n = n+1;
    cout<<"address of n: "<<&n<<endl;
    return n;
}

int main() {
    int n;
    cout<<"enter value of n: ";

    cin>>n;
    cout<<"value of n before incrementing: "<<n<<endl;
    n = incrementByOne(n);
    cout<<"incremented value of n: "<<n<<endl;
    cout<<&n<< endl;
    return 0;
}