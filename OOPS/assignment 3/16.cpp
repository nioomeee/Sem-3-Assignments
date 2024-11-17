// . Write a C++ Program to enter two string and copy one string to another.
#include<iostream>
#include<string>
using namespace std;

int main(){
    
    string str1, str2;

    cout<<"\n ENter 1st string: ";
    getline(cin, str1);
    cout<<"\n 2nd string before copying = "<<str2<<endl;

    str2 = str1;
    cout<<"\n 2nd string after copying = "<<str2<<endl;

    cout<<endl;
    return 0;
}