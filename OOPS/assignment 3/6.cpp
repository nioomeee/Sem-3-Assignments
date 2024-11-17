// Write a C++ program to find the Smllest element of a given array of integers pass array
// arguements in a Function.
#include<iostream>
#include<stdint.h>
using namespace std;

class Solution{
public:
    int Smallest(int arr[], int n){
        int small = INT32_MAX;

        for(int i = 0; i < n; i ++){
            small = min(small, arr[i]);
        }

        return small;
    }
}sol;

int main(){
    
    int n;
    cout<<"\n Enter the elements you want in the array: ";
    cin>>n;
    int arr[n];

    cout<<"\n taking innput from the user: "<<endl;

    for(int i = 0; i < n; i ++){
        cout<<" ["<<i+1<<"]: ";
        cin>>arr[i];
    }

    cout<<"\n the smallest element from the array = "<<sol.Smallest(arr, n)<<endl;
    cout<<endl;
    return 0;
}