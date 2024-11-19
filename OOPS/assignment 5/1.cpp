// Write a program to input n integer numbers and display highest and second highest number
#include<iostream>
using namespace std;

class Solution{
public:
    void Highest(int arr[], int n){
        int large = arr[0], slarge = arr[1];

        for(int i = 0; i < n; i ++){
            if(arr[i] > large){
                slarge = large;
                large = arr[i];
            }
            if(arr[i] > slarge && arr[i]<large){
                slarge = arr[i];
            }
        }

        cout<<"\n The largest value = "<<large<<endl;
        cout<<"\n The second largest value = "<<slarge<<endl;
    }
}sol;

int main(){
    
    int n;
    cout<<"\n Enter the number of elements: ";
    cin>>n;

    try{
        if(n <= 2){
            throw 0;
        }
    }catch(int err){
        cerr<<"Enter elements more than 2"<<endl;
        return 1;
    }

    int arr[n];

    for(int i = 0; i < n; i ++){
        cout<<"\n "<<i+1<<":";
        cin>>arr[i];
    }
    sol.Highest(arr, n);
    cout<<endl;
    return 0;
}