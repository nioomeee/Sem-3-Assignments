// Write a C++ program to take a account no, balance and withdraw amount. If amount is less
// than balance then raise an exception.
// Note : If exception is raised, user need to enter withdraw amount again till the exception
// resolves.
#include<iostream>
using namespace std;

class Solution{
public:

};

int main(){
    int no;
    float balance, amount;
    cout<<"\n Enter account no: ";
    cin>>no;
    cout<<"\n Enter balance: ";
    cin>>balance;
    cout<<"\n Enter amount to withdraw: ";
    cin>>amount;

    while(true){
            try{
            if(amount > balance){
                throw 0;
            }else{
                balance = balance - amount;
                cout<<"\n The remaining balance = "<<balance<<endl;
                break;
            }
        }catch(int err){
            cerr<<"\n Insufficient balance"<<endl;
            cout<<"\n Enter amount to withdraw again: ";
            cin>>amount;
        }
    }
    

    cout<<endl;
    return 0;
}