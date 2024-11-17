// Write a C++ program to enter a 2D Array and print those elements.
#include<iostream>
using namespace std;

int main(){
    
    int arr[10][10], r, c;
    cout<<"\n Enter the number of rows: ";
    cin>>r;

    cout<<"\n Enter the number of columns: ";
    cin>>c;

    cout<<"\n Taking input from the user: "<<endl;
    for(int i = 0; i < r; i ++){
        for(int j = 0; j < c; j ++){
            cout<<" arr["<<i<<"]["<<j<<"]: ";
            cin>>arr[i][j];
        }
    }

    cout<<"\n Printing the output to the user: "<<endl;
    for(int i = 0; i < r; i ++){
        for(int j = 0; j < c; j ++){
            cout<<" arr["<<i<<"]["<<j<<"] = "<<arr[i][j]<<endl;
        }
    }

    cout<<endl;
    return 0;
}