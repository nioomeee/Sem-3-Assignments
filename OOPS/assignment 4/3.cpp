// Write a program to create a class template for the ‘Array’ class.
#include<iostream>
using namespace std;

template <typename T>
class Array{
public: 
    T* arr;
    int size;

    Array(int n){
        size = n;
        arr = new T[size];
    }

    void getData(){
        for(int i = 0; i < size; i ++){
            cout<<" ["<<i<<"]: ";
            cin>>arr[i];
        }
    }

    void Show(){
        for(int i = 0; i < size; i ++){
            cout<<" ["<<i<<"] = "<<arr[i]<<endl;
        }
    }

    ~Array(){
        delete[] arr;
    }
};

int main(){
    
    int n;
    cout<<"\n Enter the size of the array: ";
    cin>>n;
    Array <int> arr(n);

    arr.getData();
    arr.Show();

    cout<<endl;
    return 0;
}