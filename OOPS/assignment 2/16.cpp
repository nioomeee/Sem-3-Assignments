// Write a C++ Program to find the sum of Numbers using Recursive Function
#include<iostream>
using namespace std;

class Solution{
public:
    int Sum(int sum = 0){
        int num;
        cout<<"\n Enter a number to add(press -1 to quit): ";
        cin>>num;

        if(num == -1){
            return sum;
        }else{
            sum += num;
            return Sum(sum);
        }
    }
}sol;

int main(){
    
    int n;
    int sum = sol.Sum(0);
    cout<<"\n the sum of numbers = "<<sum;
    return 0;
}