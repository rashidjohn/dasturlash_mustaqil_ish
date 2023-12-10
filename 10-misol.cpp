#include <iostream>
#include <string>
using namespace std;
class car {
protected:
    string make;
    string model;
    int year;
public:
    car(string make, string model, int year)
    : make(make), model(model), year(year) {}
    void displayInfo() {
        cout << "Make: " << make << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};

// Derived class
class Car : public car {
private:
    string color;

public:
    Car(string make, string model, int year, string color)
        : car(make, model, year), color(color){}
    void displayInfo() {
        car::displayInfo();
        cout << "Color: " << color << endl;
    }
};
int main() {
    Car myCar("Toyota", "Corolla", 2022, "Silver");
    myCar.displayInfo();
    return 0;
}