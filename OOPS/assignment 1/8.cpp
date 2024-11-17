// Write a C++ program to find greatest number between 3 number using if-else-if statements.

#include<iostream>
using namespace std;

class Solution{
public:
    int greatest(int a, int b, int c){
       if(a >= b && a >= c){
        return a;
       }else if(b >= a && b>= c){
        return b;
       }else if(c >= a && c >= b){
        return c;
       }else{
        return -1;
       }
    }
};

int main(){
    
    int a, b, c;
    cout<<"\n Enter 1st number: ";
    cin>>a;

    cout<<"\n Enter 2nd number: ";
    cin>>b;
    
    cout<<"\n Enter 3rd number: ";
    cin>>c;
    
    Solution sol;

    cout<<"\n The greates of all 3 numbers = "<<sol.greatest(a, b, c)<<endl;
    
    cout<<endl;
    return 0;
}