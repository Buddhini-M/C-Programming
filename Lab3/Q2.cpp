#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;
    char grade;
    string group;

public:
    Student() {
        group = "2025 group";
    }

    void setName(string n) { name = n; }
    void setAge(int a) { age = a; }
    void setGrade(char g) { grade = g; }

    string getName() { return name; }
    int getAge() { return age; }
    char getGrade() { return grade; }

    void displayInfo() {
        cout << "Name: " << getName() << endl;
        cout << "Age: " << getAge() << endl;
        cout << "Grade: " << getGrade() << endl;
        cout << "Group: " << group << endl;
    }
};

int main() {
    Student s;
    s.setName("Buddhini");
    s.setAge(27);
    s.setGrade('A');

    cout << "Name: " << s.getName() << endl;
    cout << "Age: " << s.getAge() << endl;
    cout << "Grade: " << s.getGrade() << endl;

    s.displayInfo();
    return 0;
}