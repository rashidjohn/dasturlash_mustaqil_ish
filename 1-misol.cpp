#include <iostream>

using namespace std;

void raqamAlmashtirish(int &a, int &b) {
    a = a + b;
    b = a - b;
    a = a - b;
}

int sum(int a,int b){
    return a+b;
}

int main() {
    // Masala 1: Ikki sonni yangi o'zgaruvchi qo'shmasdan almashtirish
    int a = 5, b = 10;
    cout << "Oldin: a = " << a << ", b = " << b << endl;
    raqamAlmashtirish(a, b);
    cout << "Keyin: a = " << a << ", b = " << b << endl;

    // Masala 2: Sonlar yig'indis
    cout << "Yig'indi: " << sum(a,b) << endl;
    return 0;
}
