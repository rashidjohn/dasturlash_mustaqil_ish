#include <iostream>
using namespace std;
double orta_arifmetik(double a,double b){
    return (a+b)/2;
}
int kvadratniHisoblash(int num){
    return num*num;
}
int main(){
    double son1, son2;
    cout << "Birinchi sonni kiriting: ";cin >> son1;
    cout << "Ikkinchi sonni kiriting: ";cin >> son2;
    cout << "Sonlarning o'rta arifmetigi: " << orta_arifmetik(son1, son2) << endl;
    cout << "Son kiriting: ";
    int son;
    cin >> son;
    cout << son << " ning kvadrati: " << kvadratniHisoblash(son) << endl;
    return 0;
}
