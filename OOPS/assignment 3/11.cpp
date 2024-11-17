// Write a C++ Program to enter 10 student details (Roll,Name) using array of Object.
#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    int roll;
    string name;

public:
    void getData() {
        cout << "\nEnter Roll Number: ";
        cin >> roll;
        cout << "\nEnter Name: ";
        cin.ignore(); 
        getline(cin, name);
    }

    void show() {
        cout << "\nRoll Number: " << roll << endl;
        cout << "Name: " << name << endl;
    }
};

int main() {
    int n;
    cout<<"\n Enter the number of studnets: ";
    cin >> n;
    Student students[n];

    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for student " << i + 1 << ":" << endl;
        students[i].getData();
    }

    cout << "\nStudent Details:" << endl;
    for (int i = 0; i < n; i++) {
        students[i].show();
    }

    cout << endl;
    return 0;
}
