#include <iostream>
using namespace std;
void korsatkich(){
    int a = 5;
    int *ptr_a;
    ptr_a = &a;
    cout << "Qiymat: " << a << endl;
    cout << "Manzil: " << ptr_a << endl;
    cout << "Qiymat (ko'rsatkich orqali): " << *ptr_a << endl;
}
void dinamikXotira(){
    int n;
    cout << "Massiv uzunligini kiriting: ";cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; ++i) {
        cout << "Element " << i << " ni kiriting: ";
        cin >> arr[i];
    }
    cout << "Massiv qiymatlari: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    delete[] arr;
}
int main(){
    cout << "      Ko'rsatkichga oid misol:" << endl;
    korsatkich();
    cout << "      Dinamik xotiraga oid misol:" << endl;
    dinamikXotira();
}
