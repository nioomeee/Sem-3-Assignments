// Write a C++ program to swap numbers using friend function. 
#include<iostream>
using namespace std;

class Solution{
private:
    int a, b;

public:
    void setData(){
        cout<<"\n Enter 1st number: ";
        cin>>a;

        cout<<"\n Enter 2nd number: ";
        cin>>b;
    } 
    void getData(){
        cout<<"\n 1st number: "<<a<<endl;
        cout<<"\n 2nd number: "<<b<<endl;
    }
    friend void Swap(Solution &obj);

}obj;

void Swap(Solution &obj){
    int temp = obj.a;
    obj.a = obj.b;
    obj.b = temp;
}

int main(){
    
    obj.setData();

    cout<<"\n Before swapping: "<<endl;
    obj.getData();

    Swap(obj);

    cout<<"\n After swapping: "<<endl;
    obj.getData();
    
    cout<<endl;
    cout<<endl;
    return 0;
}