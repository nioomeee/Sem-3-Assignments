// Write a program to take array values from user and illustrate array index out of bound
// exception.
#include<iostream>
using namespace std;

int main(){
    
    int n;
    cout<<"\n Enter the number of elements you want in the array: ";
    cin>>n;

    int arr[n];

    for(int i = 0; i < n; i ++){
        cout<<" "<<i+1<<": ";
        cin>>arr[i];
    }

    int idx;
    cout<<"\n Enter the index you want to access: ";
    cin>>idx;

    try{
        if(idx > n){
            throw 0;
        }
    }catch(int err){
        cout<<"\n Array index you want to access is out of bound";
        return 1;
    }

    cout<<"\n arr["<<idx<<"] = "<<arr[idx]<<endl;
    cout<<endl;
    return 0;
}