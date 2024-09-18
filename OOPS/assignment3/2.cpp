// Write a c++ Program to illustrate the traversal of a 2D Array.

#include<iostream>
using namespace std;

int main(){
    int n, m;
    cout<<"Enter the number of rows: ";
    cin>>n;
    cout<<"Enter the number of columns: ";
    cin>>m;

    //Creating a dynamic 2d array
    int **arr = new int*[n];
    for(int i = 0; i<n; i++)
    {
        arr[i] = new int[m];
    }

    cout<<"Taking input from user: "<<endl;
    for(int i = 0; i < n; i++)
    {
        for (int j = 0; j< m; j++)
        {
            cout<<"["<<i+1<<"]["<<j+1<<"] : ";
            cin>>arr[i][j];
        }
    }
    cout<<endl;

    cout<<"Printing the output: "<<endl;
    for(int i = 0; i < n; i++)
    {
        for (int j = 0; j< m; j++)
        {
            cout<<"["<<i+1<<"]["<<j+1<<"] = "<<arr[i][j]<<endl;
        }
    }

    // deleting the array
    for(int i = 0; i < n; i++)
    {
        delete[] arr[i];
    }

    delete[] arr;
    return 0;
}