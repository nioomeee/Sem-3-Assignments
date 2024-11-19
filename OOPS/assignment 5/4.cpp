// Write a C++ program which asks the user to input a number which should be greater than
// equal to zero and should be less than to 100, If not raise an exception.
#include<iostream>
#include<exception>
using namespace std;

class Solution{
public:
    int check(int n){
        try{
            if(n > 100){
                throw 1;
            }else if(n < 0){
                throw 0;
            }
        }catch(int err){
            if(err == 0){
                cerr<<"\n The number should be greater than 0"<<endl;
                return 1;
            }else{
                cerr<<"\n the number should be less than 100"<<endl;
                return 1;
            }
        }
        cout<<"\n The number you've entered = "<<n<<endl;
    }
}sol;

int main(){
    
    int n;
    cout<<"\n ENter a number: ";
    cin>>n;

    sol.check(n);
    cout<<endl;
    return 0;
}