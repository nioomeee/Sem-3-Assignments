// Write a C++ to create a class Subject to print the detail of Subject Code, Subject Name using
// objects.
#include<iostream>
#include<string>
using namespace std;

class Subject{
private:
    string name;
    int code;

public:
    Subject(string n, int c):name(n), code(c){};

    void Show()
    {
        cout<<"\n Subject name: "<<name;
        cout<<"\n Subject code "<<code<<endl;
    }
};

int main()
{
    string name;
    int code;
    cout<<"\n For 1st subject-----------------------";
    cout<<"\n Enter the subject name: ";
    cin>>name;
    cout<<"\n ENter the subject code: ";
    cin>>code;
    Subject sub1(name, code);
    sub1.Show();
    cout<<"\n For 2nd subject-----------------------";\
    cout<<"\n Enter the subject name: ";
    cin>>name;
    cout<<"\n Enter the subject code: ";
    cin>>code;
    Subject sub2(name, code);
    sub2.Show();
    cout<<"\n\n";
    return 0;
}