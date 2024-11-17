// Write a C++ Program to enter salary and output income tax and net salary
#include<iostream>
using namespace std;

class Solution{
private: 
    float incomeTax, Salary;
public:
    float tax(float salary){
        Salary = salary;
        incomeTax = (0.10*Salary);
        return incomeTax;
    }
    float netSalary(){
        return Salary - incomeTax;
    }
};

int main(){
    
    float salary;
    cout<<"\n Enter your salary: ";
    cin>>salary;

    Solution sol;

    cout<<"\n Income tax = "<<sol.tax(salary);
    cout<<"\n Net Salary = "<<sol.netSalary();
    cout<<endl;
    return 0;
}