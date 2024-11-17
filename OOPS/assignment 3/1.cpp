// Write a c++ Program to illustrate the traversal of an 1D Array.
#include<iostream>
using namespace std;

int main(){
    
    int n;
    cout<<"\n Enter the number of elements you want in the array: ";
    cin>>n;
    int* arr = new int[n];

    cout<<"\n taking innput from the user: "<<endl;

    for(int i = 0; i < n; i ++){
        cout<<" ["<<i+1<<"]: ";
        cin>>arr[i];
    }

    cout<<"\n printing output: "<<endl;
    for(int i = 0; i < n; i ++){
        cout<<" ["<<i+1<<"] = "<<arr[i]<<endl;
    }

    delete arr;

    cout<<endl;
    return 0;
}