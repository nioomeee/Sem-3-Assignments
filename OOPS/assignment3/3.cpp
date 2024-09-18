// Write a C++ Program to illustrate the Traversal of a string.

#include<iostream>
#include <string>

using namespace std;

int main(){
    string str;
    cout<<"Enter your string: ";
    getline(cin, str);

    cout<<"Your string is: "<<endl;
    for(int i = 0; i <str.length(); i++)
    {
        cout<<str[i]<<endl;
    }
    return 0;
}