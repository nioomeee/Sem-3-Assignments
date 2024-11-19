// Write a program to take a two values from user and illustrate Division by Zero Exception.
#include<iostream>
#include<exception>
using namespace std;

int main(){
    
    int a, b;
    cout<<"\n Enter dividend: ";
    cin>>a;
    cout<<"\n Enter divisor: ";
    cin>>b;

    try{
        if(b == 0){
            throw 0;
        }
    }catch(int err){
        cerr<<"\n Division by 0 not possible"<<endl;
        return 1;
    }
    cout<<"\n a / b = "<<a/b<<endl;
    cout<<endl;
    return 0;
}