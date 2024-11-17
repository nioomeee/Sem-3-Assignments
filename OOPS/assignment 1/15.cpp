// Write a C++ Program to print multiplication table
#include<iostream>
using namespace std;

class Solution{
public:
    void table(int n){
        cout<<endl;
        for(int i = 1; i <= 10; i ++){
            cout<<n<<" x "<<i<<" = "<<n*i<<endl;
        }
    }
};

int main(){
    
    int n;
    cout<<"\n Enter a number: ";
    cin>>n;
    cout<<"\n The table of "<<n<<": "<<endl;
    Solution sol;
    sol.table(n);
    cout<<endl;
    return 0;
}