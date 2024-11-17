// Write a C++ Program to create a function template for finding a maximum value contained
// in array
#include<iostream>
using namespace std;

class Solution{
public:
    template <typename T> T maximum(T arr[], int n){
        T maximum = 0;
        for(int i = 0; i < n; i ++){
            maximum = max(maximum, arr[i]);
        }
        return maximum;
    }
}sol;

int main(){
    
    int n;
    cout<<"\n Enter the number of elements: ";
    cin>>n;

    float arr[n];

    cout<<"\n taking input from the user: "<<endl;

    for(int i = 0; i < n; i ++){
        cout<<" ["<<i+1<<"]: ";
        cin>>arr[i];
    }

    float largest = sol.maximum(arr, n);
    cout<<"\n the largest value from the array = "<<largest<<endl;
    cout<<endl;
    return 0;
}