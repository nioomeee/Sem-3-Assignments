// Write program for swapping two values of different data type with use of function template
#include<iostream>
using namespace std;

template <typename T>
T Swap(T &a, T &b){
    T temp;
    temp = a;
    a = b;
    b = temp;
}

int main(){
    
    int a, b;
    float c, d;    
    
    cout<<"\n Enter 1st integer value: ";
    cin>>a;
    cout<<"\n Enter 2nd integer value: ";
    cin>>b;
    cout<<"\n Before swapping: "<<endl;
    cout<<" a = "<<a<<" b = "<<b<<endl;
    Swap(a, b);
    cout<<"\n After swapping: "<<endl;
    cout<<" a = "<<a<<" b = "<<b<<endl;

    cout<<"\n Enter 1st float value: ";
    cin>>c;
    cout<<"\n Enter 2nd integer value: ";
    cin>>d;
    cout<<"\n Before swapping: "<<endl;
    cout<<" c = "<<c<<" d = "<<d<<endl;
    Swap(c, d);
    cout<<"\n After swapping: "<<endl;
    cout<<" c = "<<c<<" d = "<<d<<endl;

    cout<<endl;
    return 0;
}