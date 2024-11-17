// Write a C++ program to find the area of a circle
#include<iostream>
using namespace std;

class Solution{
public:
    float area(float rad){
        return (2*3.14*rad*rad);
    }
};

int main(){
    
    float radius;
    cout<<"\n Enter the radius of the circle: ";
    cin>>radius;

    Solution sol;

    cout<<"\n the area of the circle = "<<sol.area(radius)<<endl;
    cout<<endl;
    return 0;
}