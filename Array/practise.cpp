#include<iostream>
using namespace std;

int main() {    
    int arr[5] = {1,2,3,4,5};
    int n = sizeof(arr)/ sizeof(int);
    int key; 
    cout<<"enter which key you have to find: ";
    cin>>key;

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            cout<<arr[i];
        }
    }
    return 0;
    
}