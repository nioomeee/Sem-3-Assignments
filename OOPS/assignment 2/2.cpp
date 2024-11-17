// write a c++ program to check prime number using Function
#include<iostream>
#include<vector>
using namespace std;

class Solution{
public:
    void findPrimes(int n){
        vector <bool> isPrime(n+1, true);
        isPrime[0] = false, isPrime[1] = false;

        for(int i = 2; i * i <= n; i ++){
            for(int j = i * i; j <= n; j+=i){
                isPrime[j] = false;
            }
        }

        for(int i = 2; i < n; i ++){
            if(isPrime[i]){
                cout<<i<<" ";
            }
        }

        cout<<endl;
    }
};

int main(){
    
    cout<<"\n The prime numbers from 1 to 100: "<<endl;
    Solution sol;
    sol.findPrimes(100);
    cout<<endl;
    return 0;
}