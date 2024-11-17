// Write a C++ program to find the largest element of a given array of integers using Function. 
#include<iostream>
using namespace std;

class Solution{
public:
    int largest(int arr[], int n){
        int maximum = 0;
        for(int i = 0; i < n; i ++){
            maximum = max(maximum, arr[i]);
        }
        return maximum;
    }
}sol;

int main(){
    
    int arr[10], n;
    cout<<"\n Enter the lenth of the array: ";
    cin>>n;

    cout<<"\n taking input from the user: "<<endl;

    for(int i = 0; i < n; i ++){
        cout<<" ["<<i+1<<"]: ";
        cin>>arr[i];
    }

    cout<<"\n The largest from the given array = "<<sol.largest(arr, n);

    cout<<endl;
    return 0;
}