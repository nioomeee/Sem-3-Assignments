// Write a C++ program to resize the string by 10.
#include<iostream>
using namespace std;


int main(){
    
    string str;
    cout<<"\n ENter the string: ";
    getline(cin, str);

    cout<<"\n before resize the string = "<<str<<endl;
    str.resize(10);

    cout<<"\n after resize = "<<str<<endl;
    cout<<endl;
    return 0;
}