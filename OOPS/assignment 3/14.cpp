// Write a C++ Program by entering a string a string anf find out the capacity of the string.
#include<iostream>
using namespace std;


int main(){
    
    string str;
    cout<<"\n Enter a string: ";
    getline(cin, str);

    cout<<"\n the capacity of the string = "<<str.capacity()<<endl;
    cout<<endl;
    return 0;
}