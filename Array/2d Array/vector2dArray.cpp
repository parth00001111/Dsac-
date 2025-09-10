#include<iostream> 
#include<vector>
using namespace std;

int main() {
    int row = 5;
    int col = 5;
    vector<vector<int> > v(row, vector<int>(col, -8));
    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v[i].size(); j++) {
            cout<<v[i][j]<< " ";
        }
        cout<<endl; 
    }
   
}