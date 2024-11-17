// Write a C++ Program to display largest among two numbers using function templates. Pass
// Integer, Float and Character as parameter to the template.
#include<iostream>
using namespace std;

template <typename T>
T largest(T a, T b){
    return (a > b)? a : b;
}

int main(){
    
    int a, b;
    float num1, num2;
    char ch1, ch2;
    cout<<"\n Enter 1st integer: ";
    cin>>a;
    cout<<"\n Enter 2nd integer: ";
    cin>>b;

    cout<<"\n Enter 1st float: ";
    cin>>num1;
    cout<<"\n Enter 2nd float: ";
    cin>>num2;

    cout<<"\n Enter 1st character: ";
    cin>>ch1;
    cout<<"\n Enter 2nd character: ";
    cin>>ch2;

    cout<<"\n The largest integer is: "<<largest(a, b)<<endl;

   
    cout<<"\n The largest float is: "<<largest(num1, num2)<<endl;

    
    cout<<"\n The largest character is: "<<largest(ch1, ch2)<<endl;

    cout<<endl;
    return 0;
}