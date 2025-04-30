#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

struct Student {
    char name[50];
    int id;
    float grade;
};

vector<Student> students;

void addStudent() {
    Student s;
    cout << "Enter name: ";
    cin.ignore(); // Clear newline before getline
    cin.getline(s.name, 50);
    cout << "Enter ID: ";
    cin >> s.id;
    cout << "Enter grade: ";
    cin >> s.grade;
    students.push_back(s);
}

void displayAll() {
    for (size_t i = 0; i < students.size(); ++i) {
        cout << "Name: " << students[i].name
             << ", ID: " << students[i].id
             << ", Grade: " << students[i].grade << endl;
    }
}

void searchStudent() {
    int id;
    cout << "Enter ID to search: ";
    cin >> id;
    for (size_t i = 0; i < students.size(); ++i) {
        if (students[i].id == id) {
            cout << "Found: " << students[i].name
                 << ", Grade: " << students[i].grade << endl;
            return;
        }
    }
    cout << "Student not found.\n";
}

int main() {
    int choice;
    do {
        cout << "\n1. Add Student\n2. Display All\n3. Search by ID\n4. Exit\nEnter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addStudent(); break;
            case 2: displayAll(); break;
            case 3: searchStudent(); break;
            case 4: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }
    } while (choice != 4);

    return 0;
}
