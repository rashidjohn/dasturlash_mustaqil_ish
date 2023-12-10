#include <iostream>

using namespace std;

int main(){
    // 1-son katta bo'lsa yig'indisi, aks holda ko'paytmasini qataradi
    int a, b;
    cout << "Birinchi sonni kiriting: ";cin >> a;
    cout << "Ikkinchi sonni kiriting: ";cin >> b;

    if (a > b) {
        cout << "Yig'indisi: " << a + b << endl;
    } else {
        cout << "Ko'paytmasi: " << a * b << endl;
    }

}
