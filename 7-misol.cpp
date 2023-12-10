#include <iostream>
using namespace std;
// matndagi harflar va raqamlar soni chiqaradi
void belgilarSoni(string str){
    int harflar = 0, raqamlar = 0, belgisiz = 0;
    for (char belgi : str) {
        if (isalpha(belgi)) {
            harflar++;
        } else if (isdigit(belgi)) {
            raqamlar++;
        }
    }
    cout << "Harflar soni: " << harflar << endl;
    cout << "Raqamlar soni: " << raqamlar << endl;
}
// Matnni teskari qilib chiqarish
void teskariSoz(string soz){
    for (int i = soz.length() - 1; i >= 0; i--) {
        cout << soz[i];
    }
}
int main(){
    string matn;
    cout << "Matn kiriting: ";
    getline(cin, matn);
    belgilarSoni(matn);
    cout << "Mantning teskari: ";
    teskariSoz(matn);
}
