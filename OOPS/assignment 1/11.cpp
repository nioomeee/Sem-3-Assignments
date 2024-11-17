// Write a C++ program to calculate the sum of 6 subject and find the percentage.
#include<iostream>
using namespace std;

class Solution{
private:
    float sum = 0, percentage;
public:
    float Addition(float arr[], int n){
        for(int i = 0; i < n; i ++){
            sum+=arr[i];
        }
        return sum;
    }
    float Percentage(){
        percentage = (sum / 600)*100;
        return percentage;
    }
};

int main(){
    
    float arr[6];
    int n = 6;

    for(int i = 0; i < n; i ++){
        cout<<"\n Enter marks for subject "<<i+1<<": ";
        cin>>arr[i];
    }
    
    Solution sol;

    cout<<"\n the addition of marks of all subjects = "<<sol.Addition(arr, n)<<endl;
    cout<<"\n the percentage of marks of all subjects = "<<sol.Percentage()<<"%"<<endl;
    cout<<endl;
    return 0;
}