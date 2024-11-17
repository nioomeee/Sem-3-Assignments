// Write a C++ program to check minimum and maximum of two numbers using Ternary
// operator
#include<iostream>
using namespace std;

class Solution{
public:
    int maximum(int a, int b){
        return (a>b)? a : b;
    }

    int minimum(int a, int b){
        return (a<b)? a : b;
    }
};

int main(){
    
    int a, b;
    cout<<"\n enter 1st number: ";
    cin>>a;
    cout<<"\n Enter 2nd number: ";
    cin>>b;

    Solution sol;

    cout<<"\n the maximum of both numbers = "<<sol.maximum(a, b)<<endl;
    cout<<"\n the minimum of both numbers = "<<sol.minimum(a, b)<<endl;
    cout<<endl;
    return 0;
}