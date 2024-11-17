// Write a C++ Program to illustrate the Traversal of a string.
#include<iostream>
#include<string>
using namespace std;

int main(){
    
    string str;
    cout<<"\n Enter your desired string: ";
    getline(cin, str);

    cout<<"\n the string = "<<endl;
    for(int i = 0; i < str.length(); i++){
        cout<<" "<<str[i]<<endl;
    }
    
    cout<<endl;
    return 0;
}