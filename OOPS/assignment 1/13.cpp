// Write a C++ Program to create a menu driven program for to perform the following
// operations
// 1. Sum of Digit
// 2. Armstrong or Not
// 3. Palindrome or Not
// 4. Multiplication of Digit
#include<iostream>
#include<math.h>
using namespace std;

class Solution{
public:
    int Sum(int a){
        int rem;
        int sum = 0;
        while(a > 0){
            rem = a % 10;
            sum += rem;
            a /= 10;
        }
    }

    string armstrong(int a){
        int num = a;
        int sum = 0;
        int digit;
        int digits = 0;

        while(num > 0){
            num /= 10;
            digits++;
        }

        num = a;

        while(num > 0){
            digit = num % 10;
            sum += pow(digit, digits);
            num /= 10;
        }

        if(sum == a){
            return "armstrong";
        }else{
            return "not armstrong";
        }
    }

    string palindrome(int num){
        int rem;
        int sum = 0;
        int n = num;

        while(num > 0){
            rem = num % 10;
            sum += (sum * 10) + rem;
            num /= 10;
        }
        
        return (sum == n)? "palindrome" : "not palindrome";
    }

    int Mul(int a){
        int mul = 1;
        int rem;
        while(a > 0){
            rem = a % 10;
            mul *= rem;
            a /= 10;
        }

        return mul;
    }
};

int main(){
    
    int num;
    cout<<"\n The menu: "<<endl;

    cout<<" 1. Sum of Digit \n 2. Armstrong or Not \n 3. Palindrome or Not \n 4. Multiplication of Digit: "<<endl;
    cout<<"\n Enter yoru desired choice: ";
    cin>>num;

    Solution sol;

    int a, b;

    switch(num){
        case 1:
        cout<<"\n Enter a number ";
        cin>>a;

        cout<<"\n The addition of digits of "<<a<<" = "<<sol.Sum(a)<<endl;
        break;
        
        case 4:
        cout<<"\n Enter a number ";
        cin>>a;

        cout<<"\n The multiplication of digits of "<<a<<" = "<<sol.Mul(a)<<endl;
        break;

        case 2: 
        cout<<"\n Enter a number: ";
        cin>>a;

        cout<<"\n "<<a<<" is "<<sol.armstrong(a)<<endl;

        break;

        case 3: 
        cout<<"\n enter a number: ";
        cin>>a;

        cout<<"\n the number "<<a<<" is "<<sol.palindrome(a);
        break;

        default:
        cout<<"\n Wrong number chosen"<<endl;
    }
    cout<<endl;
    return 0;
}