// Create a class employee with name, salary, age as member, use get_data() and show()
// functions. Display details of 3 manager employees.
#include<iostream>
#include <string>
using namespace std;

class Employee{
private: 
    int age;
    string name;
    float salary;
public:
    void getData(){
        cout << "\n ENter yoru name: ";
        cin >> name;
        cout << "\n Enter your age: ";
        cin >> age;
        cout << "\n Enter your salary: ";
        cin >> salary;
    }
    void Show(){
        cout << "\n age = "<<age<<endl;
        cout << "\n name = "<<name<<endl;
        cout << "\n salary = "<<salary<<endl;
    }
};

int main(){
    
    Employee emp[3];
    string name;
    int age;
    float salary;

    for(int i = 0; i < 3; i ++){
        cout<<"\n For employee"<<i+1<<": "<<endl;
        emp[i].getData();
        emp[i].Show();
    }
    
    cout<<endl;
    return 0;
}