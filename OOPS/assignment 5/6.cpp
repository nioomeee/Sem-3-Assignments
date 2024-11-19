// Write a C++ program to accept an email address and throw an exception if it does not
// contain @ symbol.
#include<iostream>
#include<string>
using namespace std;


int main(){
    
    string email;
    cout<<"\n Enter your email: ";
    getline(cin, email);

    try{
        if(email.find('@') == string::npos){
            throw 0;
        }else{
            cout<<"\n your email "<<email<<" is valid"<<endl;
        }

    }catch(int err){
        cerr<<"The email is not valid"<<endl;
        return 1;
    }

    cout<<endl;
    return 0;
}