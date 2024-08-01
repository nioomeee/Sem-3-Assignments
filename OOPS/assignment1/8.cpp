//  Write a C++ program to find greatest number between 3 number using if-else-if statements
#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout<<"\n Enter 1st number: ";
    cin>>a;
    cout<<"\n Enter 2nd number: ";
    cin>>b;
    cout<<"\n Enter 3rd number: ";
    cin>>c;

    cout<<"\n ---------------------"<<endl;
    cout<<" 1st number = "<<a<<endl;
    cout<<" 2nd number = "<<b<<endl;
    cout<<" 3rd number = "<<c<<endl;
    cout<<"\n ---------------------"<<endl;

    if(a >= b)
    {
        if(a >= c)
        {
            cout<<"\n "<<a<<" is the greatest."<<endl;
        }
    }
    else if(c >= a)
    {
        if(c >= b)
        {
            cout<<"\n "<<c<<" is the greatest."<<endl;
        }
    }
    else if(b >= c)
    {   
        if(b >=a)
        {
            cout<<"\n "<<b<<" is the greatest."<<endl;
        }
    }
    cout<<"\n\n";
    return 0;
}