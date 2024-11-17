// Write a C++ Program to generate a simple calculator using constructor.
#include<iostream>
using namespace std;

class Solution{
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

}sol;

int main(){
    
    int a, b;
    cout<<"\n Enter 1st number: ";
    cin>>a;
    cout<<"\n Enter 2nd number: ";
    cin>>b;

    char op;
    cout<<"\n Enter your desired operation(+,-,*,/,%): ";
    cin>>op;

    switch(op){
        case '+':
        cout<<"\n "<<a<<" "<<op<<" "<<b<<" = "<<sol.sum(a,b)<<endl;
        break;

        case '-':
        cout<<"\n "<<a<<" "<<op<<" "<<b<<" = "<<sol.sub(a,b)<<endl;
        break;

        case '*':
        cout<<"\n "<<a<<" "<<op<<" "<<b<<" = "<<sol.mul(a,b)<<endl;
        break;

        case '/':
        cout<<"\n "<<a<<" "<<op<<" "<<b<<" = "<<sol.div(a,b)<<endl;
        break;

        case '%':
        cout<<"\n "<<a<<" "<<op<<" "<<b<<" = "<<sol.mod(a,b)<<endl;
        break;

        default:
        cout<<"\n Enter proper operation"<<endl;
    }
    cout<<endl;
    return 0;
}