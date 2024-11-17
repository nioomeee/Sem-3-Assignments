// Write a C++ program to use arithmetic operators like +,-,/, %
#include<iostream>
using namespace std;

class Solutions{
public: 
    int sum(int a, int b){
        return a+b;
    }

    int sub(int a, int b){
        return a-b;
    }

    int mul(int a, int b){
        return a*b;
    }

    int div(int a, int b){
        return a/b;
    }

    int mod(int a, int b){
        return a%b;
    }
};

int main(){
    
    Solutions sol;
    int a, b;
    cout<<"\n Enter 1st number: ";
    cin>>a;
    cout<<"\n ENter 2nd number: ";
    cin>>b;

    cout<<"\n the addition of "<<a<<" and "<<b<<" = "<<sol.sum(a,b)<<endl;
    cout<<"\n the subtraction of "<<a<<" and "<<b<<" = "<<sol.sub(a,b)<<endl;
    cout<<"\n the multiplication of "<<a<<" and "<<b<<" = "<<sol.mul(a,b)<<endl;
    cout<<"\n the division of "<<a<<" and "<<b<<" = "<<sol.div(a,b)<<endl;
    cout<<"\n the remainder of "<<a<<" and "<<b<<" = "<<sol.mod(a,b)<<endl;
    return 0;
}