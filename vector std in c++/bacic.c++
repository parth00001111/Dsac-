#include<iostream>
#include<vector>
using namespace std;
void fun(vector<int>v) {
    for(int i = 0; i < v.size(); i++) {
        cout<<v[i]<< " ";
    }
    cout<<endl;
}

int main() {
  vector<int>v;
  v.push_back(1);
  v.push_back(2);
  v.push_back(3);
  
  v.pop_back();
  fun(v);
  return 0;
}