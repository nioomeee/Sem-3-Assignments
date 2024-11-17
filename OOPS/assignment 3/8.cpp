// Write a C++ program to count the number of elements in an integer Array using Function.
#include<iostream>
using namespace std;

class Solution{
public:
    int Elements(int arr[]){
        int count = 0;
        for(int i = 0; arr[i] = '\0'; i++){
            count++;
        }
        return count;
    }
}sol;

int main(){
    
    int arr[3];

    cout<<"\n taking input from the user: "<<endl;

    for(int i = 0; i < 3; i ++){
        cout<<" ["<<i+1<<"]: ";
        cin>>arr[i];
    }

    cout<<"\n the size of the array = "<<sol.Elements(arr);
    
    cout<<endl;
    return 0;
}