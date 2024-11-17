// Write a C++ Program to print following pyramid
// ********
// *      *
// *      *
// *      *
// ********

#include<iostream>
using namespace std;

class Solution{
public:
    void pyramid(int n){
        for(int i = 1; i <= n; i ++){
            for(int j = 1; j <= n; j++){
                if(i == n || i == 1 || j == n || j == 1){
                    cout<<"*";
                }else{
                    cout<<" ";
                }
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

    Solution sol;

    cout<<"\n The required pyramid: "<<endl;
    sol.pyramid(n);

    cout<<endl;
    return 0;
}