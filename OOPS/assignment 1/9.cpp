// Write a C++ Program to compute the square of number series till 10.
#include<iostream>
using namespace std;

class Solution{
public:
    int square(int num){
        return num*num;
    }
};

int main(){
    
    cout<<"\n the squares of number till 10: "<<endl;

    Solution sol;

    for(int i = 1; i <= 10; i ++){
        cout<<sol.square(i)<<" ";
    }
    cout<<endl;
    cout<<endl;
    return 0;
}