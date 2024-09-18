// Write a c++ Program to illustrate the traversal of an 1D Array.
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int *arr = new int[n];

    cout<<"Enter the values for "<<n<<" elements of the array"<<endl;
    for(int i = 0; i < n; i++)
    {
        cout<<i+1<<" : ";
        cin>>arr[i];
    }

    cout<<"The elements of the array are: "<<endl;
    for(int i = 0; i< n; i++)
    {
        cout<<i+1<<" = "<<arr[i]<<endl;
    }
    
    delete[] arr;
    return 0;
}