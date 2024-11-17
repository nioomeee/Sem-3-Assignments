// Write a Program with function to Check Whether a Number Is a Palindrome or Not.
#include<iostream>
using namespace std;

class Solution{
public:
    string Palindrome(int num){
        int n = num;
        int rem = 0;
        int sum = 0;

        while(num > 0){
            rem  = num % 10;
            sum = (sum * 10) + rem;
            num /= 10;
        }

        return (sum == n)? "palindrome" : "not palindrome";
    }
}sol;

int main(){
    
    int n;
    cout<<"\n Enter a number: ";
    cin>>n;

    cout<<"\n The given number "<<n<<" is "<<sol.Palindrome(n)<<endl;
    cout<<endl;
    return 0;
}