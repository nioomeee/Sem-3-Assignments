// . Write a C++ Program to enter two strings from user and Swap those string using function.
#include<iostream>
using namespace std;

int main(){
    
    string str1, str2;
    cout<<"\n ENter 1st string: ";
    cin>>str1;

    cout<<"\n ENter 2nd string: ";
    cin>>str2;
    
    cout<<"\n Before swapping ---------"<<endl;
    cout<<"1st string = "<<str1<<endl;
    cout<<"2nd string = "<<str2<<endl;

    swap(str1, str2);

    cout<<"\n After swapping ---------"<<endl;
    cout<<"1st string = "<<str1<<endl;
    cout<<"2nd string = "<<str2<<endl;
    
    cout<<endl;
    return 0;
}