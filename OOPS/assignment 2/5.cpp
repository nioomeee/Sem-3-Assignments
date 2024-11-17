// Write a c++ program to print Fibonacci series up to a user inputted numbers using
// recursive function
#include<iostream>
using namespace std;

class Solution{
public:
    int Fibonacci(int n){
        if(n == 0 || n == 1){
            return 1;
        }else{
            return Fibonacci(n-1) + Fibonacci(n-2);
        }
    }
}sol;

int main(){
    
    int n;
    cout<<"\n Enter a number: ";
    cin>>n;

    cout<<"\n Fibonacci series up to "<<n<<" terms:"<<endl;

    for(int i = 0; i < n; i ++){
        cout<<sol.Fibonacci(i)<<" ";
    }
    cout<<endl;
    cout<<endl;
    return 0;
}