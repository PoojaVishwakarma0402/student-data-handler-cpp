// C++ Student Data Handler
#include <iostream>
using namespace std;

class Student {
public:
    int age;
    char name[50];
};

int main() {
    Student students[5];

    // Input student data
    for (int i = 0; i < 5; i++) {
        cout << "Enter name of student " << i + 1 << endl;
        cin.ignore(); // Clear newline character from previous input
        cin.getline(students[i].name, sizeof(students[i].name));

        cout << "Enter Age of student " << i + 1 << endl;
        cin >> students[i].age;
    }

    // Display student data
    for (int i = 0; i < 5; i++) {
        cout << "Student " << i + 1 << " name: " << students[i].name << endl;
        cout << "Student " << i + 1 << " age: " << students[i].age << endl;
    }

    return 0;
}
