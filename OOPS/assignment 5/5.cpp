// Write a C++ program to perform arithmetic operations on two numbers and throw an
// exception if the dividend is zero or does not contain an operator.
#include<iostream>
using namespace std;

class Solution{
public:

};

int main(){
    
    int a, b;
    char op;
    cout<<"\n ENter 1t number: ";
    cin>>a;
    cout<<"\n ENter 2nd number: ";
    cin>>b;

    cout<<"\n ENter desired operations(+, -, *, /, %): ";
    cin>>op;

    try{
        if(op!= '+' || op!= '-' || op!= '*' || op!='/' || op!= '%'){
            throw 0;
        }
    }catch(int err){
        cerr<<"\n Enter a valid operation"<<endl;
        return 1;
    }

    switch(op){
        case '+':
        cout<<"a + b = "<<a+b<<endl;
        break;

        case '-':
        cout<<"a - b = "<<a-b<<endl;
        break;

        case '*':
        cout<<"a * b = "<<a*b<<endl;
        break;

        case '/':
        cout<<"a / b = "<<a/b<<endl;
        break;

        case '%':
        cout<<"a % b = "<<a%b<<endl;
        break;
    }
    cout<<endl;
    return 0;
}