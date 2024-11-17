// Write a C++ Program to find the cube of a number using Inline Function
#include<iostream>
using namespace std;

class Solution{
public:
    inline int cube(int n) {return n*n*n;};
}sol;

int main(){
    
    int n;
    cout<<"\n enter a number: ";
    cin>> n; 

    cout<<"\n the cube of "<<n<<" = "<<sol.cube(n)<<endl;
    
    cout<<endl;
    return 0;
}