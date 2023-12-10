#include <iostream>
using namespace std;
// 1 dan boshlab kiritilgan songacha bo'lgan sonlarni chiqarish
void func(int num){
    for (int i = 1; i <= num; ++i){
        cout << i << " ";
    }
    cout<<endl;
}
// kiritilgan sonlar yig'indisini hisoblash
int yigindi(){
    int yigindi = 0;
    int son;
    while (true) {
        cout << "Son kiriting (dasturni tugatish uchun 0 ni kiriting): ";cin >> son;
        if (son == 0) {
            break;
        }
        yigindi += son;
    }
    cout << "Kiritilgan sonlarning yig'indisi: " << yigindi << endl;
}
int main(){
    int number; cin>>number;
    func(number);
    yigindi();
    return 0;
}
