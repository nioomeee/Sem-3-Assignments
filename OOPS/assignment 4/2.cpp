// Write a C++ Program to to add two numbers with use of template function.
#include<iostream>
using namespace std;

class Solution{
public:
    template <typename T> T add(T a, T b){
        return a + b;
    }
}sol;

int main(){
    
    int a, b;
    cout<<"\n For integers: "<<endl;
    cout<<"\n Enter 1st integer : ";
    cin>>a;

    cout<<"\n Enter 1st integer : ";
    cin>>b;

    cout<<"\n Tha addition of 2 integers = "<<sol.add(a, b)<<endl;
    
    float c, d;
    cout<<"\n For floats: "<<endl;
    cout<<"\n Enter 1st float : ";
    cin>>c;
    
    cout<<"\n Enter 1st float : ";
    cin>>d;

    cout<<"\n Tha addition of 2 floats = "<<sol.add(c, d)<<endl;
    
    cout<<endl;
    return 0;
}