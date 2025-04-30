#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string brand;
    int year;

public:
    Car(string b, int y) {
        brand = b;
        year = y;
        cout << "Car " << brand << " from " << year << " created." << endl;
    }

    ~Car() {
        cout << "Car " << brand << " destroyed." << endl;
    }

    void showInfo() {
        cout << "Brand: " << brand << ", Year: " << year << endl;
    }
};

int main() {
    Car* car1 = new Car("Toyota", 2020);
    car1->showInfo();
    delete car1;

    return 0;
}