// Write a C++ Program to print following pyramid
// *
// **
// ***
// ****
// *****
#include<iostream>
using namespace std;

class Solution{
public:
    void pyramid(int n){
        for(int i = 1; i <= n; i ++){
            for(int j = 1; j <= i; j ++){
                cout<<"*";
            }
            cout<<endl;
        }
        cout<<endl;
    }
};

int main(){
    
    int n;
    cout<<"\n Enter the number of rows: ";
    cin>>n;

    cout<<"\n The pyramid required = "<<endl;
    Solution sol;
    sol.pyramid(n);

    cout<<endl;
    return 0;
}