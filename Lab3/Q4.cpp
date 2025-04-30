#include <iostream>
#include <string>
using namespace std;

class Vehicle {
protected:
    string brand;
    int year;

public:
    Vehicle(string b, int y) {
        brand = b;
        year = y;
    }

    virtual void showInfo() {
        cout << "Brand: " << brand << endl;
        cout << "Year: " << year << endl;
    }

    virtual void startEngine() {
        cout << "Starting engine of Vehicle" << endl;
    }

    virtual ~Vehicle() {}
};

class Car : public Vehicle {
private:
    int numDoors;

public:
    Car(string b, int y, int doors) : Vehicle(b, y) {
        numDoors = doors;
    }

    void showInfo() {
        cout << "Brand: " << brand << endl;
        cout << "Year: " << year << endl;
        cout << "Number of doors: " << numDoors << endl;
    }

    void startEngine() {
        cout << "Car engine is starting!" << endl;
    }
};

class ElectricCar : public Car {
private:
    int batteryCapacity;

public:
    ElectricCar() : Car("Generic", 2000, 4) {
        batteryCapacity = 0;
    }

    ElectricCar(string b, int y, int doors, int battery) : Car(b, y, doors) {
        batteryCapacity = battery;
    }

    void showInfo() {
        Car::showInfo();
        cout << "Battery Capacity: " << batteryCapacity << " kWh" << endl;
    }

    void startEngine() {
        cout << "Electric engine is starting... Silent but powerful!" << endl;
    }
};

int main() {
    Vehicle* v = new Vehicle("Generic", 2015);
    v->showInfo();
    v->startEngine();
    delete v;

    Car* c = new Car("Toyota", 2021, 4);
    c->showInfo();
    c->startEngine();
    delete c;

    ElectricCar* e1 = new ElectricCar();
    e1->showInfo();
    e1->startEngine();
    delete e1;

    ElectricCar* e2 = new ElectricCar("Tesla", 2023, 4, 75);
    e2->showInfo();
    e2->startEngine();
    delete e2;

    ElectricCar* e3 = new ElectricCar("Nissan", 2022, 4, 40);
    e3->showInfo();
    e3->startEngine();
    delete e3;

    return 0;
}