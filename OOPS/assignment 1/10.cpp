// Write a C++ program that will ask user to input two numbers and check whether values are
// equal or not using assignment operator
#include<iostream>
#include<string>
using namespace std;

class Solution{
public:
    string result(int a, int b){
        if(a==b){
            return "equal";
        }else{
            return "not equal";
        }
    }
};

int main(){
    
    int a, b;
    cout<<"\n Enter 1st number: ";
    cin>>a;

    cout<<"\n Enter 2nd number: ";
    cin>>b;
    
    Solution sol;

    cout<<"\n the numbers are "<<sol.result(a, b)<<endl;
    cout<<endl;
    return 0;
}