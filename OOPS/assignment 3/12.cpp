// Write a C++ Program for two string Name & Surname of a student and concate that two
// string.
#include<iostream>
using namespace std;

class Solution{
public:
    string fullName(string name, string surname){
        string full = name+' '+surname;
        return full;
    }
};

int main(){
    
    string name, surname;
    Solution sol;
    cout<<"\n Enter your first name: ";
    cin>>name;
    cout<<"\n Enter your surname: ";
    cin>>surname;

    cout<<"\n Your full name is: "<<sol.fullName(name, surname);

    cout<<endl;
    return 0;
}