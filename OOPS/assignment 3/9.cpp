// Write a C++ Program to find the total of all the array elements using Function.
#include<iostream>
using namespace std;

class Solution{
public:
    int Total(int arr[], int n){
        int sum = 0;
        for(int i = 0; i < n; i ++){
            sum += arr[i];
        }
        return sum;
    }
}sol;

int main(){
    
    int n;
    cout<<"\n ENter the number of elements you want: ";
    cin>>n;

    int arr[n];

    cout<<"\n taking input from the user: "<<endl;

    for(int i = 0; i < n; i ++){
        cout<<" ["<<i+1<<"]: ";
        cin>>arr[i];
    }

    cout<<"\n the sum of all elements of the array: "<<sol.Total(arr, n)<<endl;
    cout<<endl;
    return 0;
}