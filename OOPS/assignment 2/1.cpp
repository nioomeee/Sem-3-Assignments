// write a c+ program to calculate factorial numbers using Recursion
#include<iostream>
using namespace std;

class Solution{
public:

    int Factorial(int n){
        if(n == 0 || n == 1){
            return 1;
        }else{
            return n * Factorial(n-1);
        }
    }
};

int main(){
    
    int n;
    cout<<"\n Enter a number: ";
    cin>>n;

    Solution sol;

    cout<<"\n The factorial of "<<n<<" = "<<sol.Factorial(n)<<endl;
    cout<<endl;
    return 0;
}