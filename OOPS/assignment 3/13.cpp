// . Write a C++ Program to enter a string from user and find Length of that string
#include<iostream>
using namespace std;


int main(){
    
    string str;
    cout<<"\n Enter a string: ";
    getline(cin, str);

    cout<<"\n the length of the string = "<<str.length()<<endl;
    cout<<endl;
    return 0;
}