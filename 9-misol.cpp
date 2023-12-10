#include <iostream>
#include <string>
using namespace std;
class City {
private:
    string name;
    string country;
    int population;
    double area;
    bool isCapital;
public:
    City(string name, string country, int population, double area, bool isCapital)
    : name(name), country(country), population(population), area(area), isCapital(isCapital) {}
    void displayDetails() {
        cout << "Nomi: " << name << endl;
        cout << "Davlat: " << country << endl;
        cout << "Aholisi: " << population << endl;
        cout << "Maydoni: " << area << " kvadrat kilometer" << endl;
        cout << "Poytaxtmi: " << (isCapital ? "Ha" : "Yo'q") << endl;
    }
    void populationniOshir(int populationQoshish) {
        population += populationQoshish;
    }
};
    int main() {
        City myCity("Tashkent", "Uzbekistan", 3000000, 334.8, true);
        myCity.displayDetails();
        myCity.populationniOshir(240000);
        myCity.displayDetails();
    return 0;
}
