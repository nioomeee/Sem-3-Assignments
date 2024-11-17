    // Write a C++ Program to convert days into years and weeks
#include<iostream>
using namespace std;

class Solution{
public:
int years;
int weeks;
int remainingDays;
    void calculate(int days){
        remainingDays = days;
        years = remainingDays / 365;
        remainingDays -= (years*365);
        weeks = remainingDays / 7;
        remainingDays -= (weeks*7);

        cout<<"\n "<<days<<" = "<<years<<" years, "<<weeks<<" weeks and "<<remainingDays<<" days.";
    }
};

int main(){
    
    int days;
    cout<<"\n Enter the number of days: ";
    cin>>days;
    Solution sol;

    sol.calculate(days);

    cout<<endl;
    return 0;
}