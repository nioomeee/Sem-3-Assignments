// Write a C++ Program to enter two strings from user and append first string to another string
#include<iostream>
using namespace std;

int main(){
    
    string str1, str2;
    cout<<"\n ENter 1st string: ";
    getline(cin, str1);

    cout<<"\n ENter 2nd string: ";
    getline(cin, str2);

    cout<<"\n Before appending ---------"<<endl;
    cout<<"1st string = "<<str1<<endl;
    cout<<"2nd string = "<<str2<<endl;

    str1.append(str2);

    cout<<"\n After appending ---------"<<endl;
    cout<<"1st string = "<<str1<<endl;

    cout<<endl;
    return 0;
}