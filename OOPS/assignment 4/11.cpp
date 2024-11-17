// Write a program to create template class to find binary value of a number given by user.
#include<iostream>
using namespace std;

template <typename T>
class Solution{
public:
    T findBinary(T num){
        T rem = 0;
        T pow = 1;
        T ans = 0;
        while(num > 0){
            rem = num % 2;
            num /= 2;
            ans += (rem * pow);
            pow *= 10;
        }
        return ans;
    }
};

int main(){
    
    int num;
    cout<<"\n ENter a number: ";
    cin>>num;

    Solution <int> sol;
    cout<<"\n the binary version of number"<<num<<" = "<<sol.findBinary(num)<<endl;
    cout<<endl;
    return 0;
}