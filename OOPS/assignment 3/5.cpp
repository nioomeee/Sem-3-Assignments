// Write a C++ program to Enter array elements and print those elements.
#include<iostream>
using namespace std;

class Solution{
public:

};

int main(){
    
    int arr[10], n;
    cout<<"\n Enter the number of elements you want in the array: ";
    cin>>n;

    cout<<"\n taking input from the user: "<<endl;

    for(int i = 0; i < n; i ++){
        cout<<" ["<<i+1<<"]: ";
        cin>>arr[i];
    }

    cout<<"\n printing output: "<<endl;
    for(int i = 0; i < n; i ++){
        cout<<" ["<<i+1<<"] = "<<arr[i]<<endl;
    }

    cout<<endl;
    return 0;
}