// Write a C++ program using Switch statement example to generate days of the week.
#include<iostream>
#include<string>
using namespace std;

class Solution{
public:
    string day(int num){
        switch (num)
        {
        case 1:
            return "Sunday";
            break;
        
        case 2:
            return "Monday";
            break;
        
        case 3:
            return "Tuesday";
            break;
        
        case 4:
            return "Wednesday";
            break;
        
        case 5:
            return "Thursday";
            break;
        
        case 6:
            return "Friday";
            break;
        
        case 7:
            return "Saturday";
            break;
        
        default:
            break;
        }
    }
};

int main(){
    
    int num;
    cout<<"\n Enter any number between 1-7 for days of week: ";
    cin>>num;
    
    if(!(num > 0 || num < 7)){
        cerr<<"\n The number should be between 1 and 7 only"<<endl;
        return -1;
    }
    Solution sol;

    cout<<"\n "<<num<<" day of the week = "<<sol.day(num)<<endl;
    cout<<endl;
    return 0;
}