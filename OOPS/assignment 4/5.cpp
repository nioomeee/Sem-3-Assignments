// Write a program to pass an object to template function and display its members
#include<iostream>
using namespace std;

class Test{
public:
    int a = 5;
    int b = 8;
};

template <typename T>
void Display(T obj){
    cout<<"\n a = "<<obj.a;
    cout<<"\n b = "<<obj.b;
}

int main(){
    
    Test obj;
    Display(obj);
    cout<<endl;
    return 0;
}