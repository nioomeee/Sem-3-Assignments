// Design a class Student with private data members (name,Marks) and public member
// functions (setName, setMarks, getName, getMarks) to demonstrate Public and Private
// access specifiers.
#include<iostream>
#include<string>
using namespace std;

class Student{
private:
    string name;
    float marks;
public:
    void setName(string n){
        name =  n;
    }
    void setMarks(float m){
        marks = m;
    }
    string getName(){
        return name;
    }
    float getMarks(){
        return marks;
    }
}student;

int main(){
    
    string name;
    float marks;
    
    cout<<"\n ENter your name: ";
    cin>>name;
    student.setName(name);

    cout<<"\n Enter your marks: ";
    cin>>marks;
    student.setMarks(marks);
    
    cout<<"\n Your name is: "<<student.getName()<<endl;
    cout<<"\n Your marks are: "<<student.getMarks()<<endl;
    
    cout<<endl;
    return 0;
}