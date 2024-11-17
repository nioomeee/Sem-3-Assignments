// Write a C++ Program to add, subtract, multiply and divide two numbers using class
// template.
#include<iostream>
using namespace std;

template <typename T>
class Solution{
public:
    T add(T a, T b){
        return a+b;
    }

    T sub(T a, T b){
        return a - b;
    }

    T mul(T a, T b){
        return a * b;
    }

    T div(T a, T b){
        return a / b;
    }

};

int main(){
    
    int a, b;
    cout<<"\n Enter the 1st integer: ";
    cin>>a;
    cout<<"\n Enter the 2nd integer: ";
    cin>>b;
    
    Solution <int> sol;

    cout<<"\n "<<a<<" + "<<b<<" = "<<sol.add(a, b)<<endl;
    cout<<"\n "<<a<<" - "<<b<<" = "<<sol.sub(a, b)<<endl;
    cout<<"\n "<<a<<" * "<<b<<" = "<<sol.mul(a, b)<<endl;
    cout<<"\n "<<a<<" / "<<b<<" = "<<sol.div(a, b)<<endl;
    cout<<endl;
    return 0;
}