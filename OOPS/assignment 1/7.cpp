// Write a C++ program to check whether the integer entered by user is positive, negative or
// zero using nested if-else. 
#include<iostream>
#include<string>
using namespace std;

class Solution{
public:
    string result(int num){
        if(num > 0){
            return "Positive";
        }
        else if(num < 0){
            return "Negative";
        }
        else{
            return "Zero";
        }
    }
};

int main(){
    
    int num;
    cout<<"\n Enter a number: ";
    cin>>num;

    Solution sol;

    cout<<"\n The entered number "<<num<<" is "<<sol.result(num)<<endl;

    cout<<endl;
    return 0;
}