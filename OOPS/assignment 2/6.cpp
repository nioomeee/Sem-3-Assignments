// Write a C++ program to calculate the area of circle, rectangle and square using function
// overloading.
#include<iostream>
using namespace std;

class Solution{
public:
    float area(float radius){
        return (2 * 3.14 * radius * radius);
    }
    int area(int length, int breadth){
        return (length * breadth);
    }
    int area(int n){
        return (n*n);
    }
}sol;

int main(){

    float radius;
    int length, breadth, side;

    cout<<"\n For circle: "<<endl;    
    cout<<"\n Enter the radius of the circle: ";
    cin>>radius;
    cout<<"\n the area of the circle  = "<<sol.area(radius)<<endl;

    cout<<"\n For rectangle: "<<endl;
    cout<<"\n Enter the length of the rectangle: ";
    cin>>length;
    cout<<"\n Enter the breadth of the rectangle: ";
    cin>>breadth;
    cout<<"\n the area of the rectangle = "<<sol.area(length, breadth)<<endl;

    cout<<"\n For square: "<<endl;
    cout<<"\n Enter the side of the square: ";
    cin>>side;
    cout<<"\n the area of the square  = "<<sol.area(side)<<endl;

    cout<<endl;
    return 0;
}