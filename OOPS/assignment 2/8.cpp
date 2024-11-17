// Write a C++ program to demonstrate the use of default arguments in function overloading
#include<iostream>
using namespace std;

class Solution{
public:
    int add(int a, int b = 0){
        return a + b;
    }
    int add(int a, int b, int c){
        return a + b + c;
    }
}sol;

int main(){
    
    int a, b, c;
    cout<<"\n Enter 1st number: ";
    cin>>a;
    cout<<"\n Enter 2nd number: ";
    cin>>b;
    cout<<"\n Enter 3rd number: ";
    cin>>c;

    cout<<"\n the addition of 2 numbers when we've provided only 1: "<<sol.add(a)<<endl;
    cout<<"\n the addition of 2 numbers when we've provided both 2: "<<sol.add(a, b)<<endl;
    cout<<"\n the addition of 3 numbers when we've provided all 3: "<<sol.add(a, b, c)<<endl;


    cout<<endl;
    return 0;
}