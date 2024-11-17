// Write a C++ to create a class Subject to print the detail of Subject Code, Subject Name using
// objects.
#include <iostream>
#include <string>

using namespace std;

class Subject {
private:
    string subjectCode;
    string subjectName;

public:
    void getData() {
        cout << "\nEnter Subject Code: ";
        cin >> subjectCode;
        cout << "\nEnter Subject Name: ";
        cin.ignore(); 
        getline(cin, subjectName);
    }

    void show() {
        cout << "\nSubject Code: " << subjectCode << endl;
        cout << "Subject Name: " << subjectName << endl;
    }
};

int main() {
    Subject sub[3];

    for (int i = 0; i < 3; i++) {
        cout << "\nFor Subject " << i + 1 << ":" << endl;
        sub[i].getData();
        sub[i].show();
    }

    cout << endl;
    return 0;
}
