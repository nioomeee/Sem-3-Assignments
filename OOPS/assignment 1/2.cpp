// Write a C++ program to swap the values of two integers. 
#include<iostream>
using namespace std;

class Solution{
public:
    void Swap(int &a, int &b){
        int temp = a;
        a = b;
        b = temp;
    }
};

int main(){
    
    int a, b;
    cout<<"\n Enter 1st number: ";
    cin>>a;
    cout<<"\n Enter 2nd number: ";
    cin>>b;

    Solution sol;
    sol.Swap(a, b);

    cout<<"\n After swap a = "<<a<<endl;
    cout<<"\n After swap b = "<<b<<endl;

    cout<<endl;
    return 0;
}