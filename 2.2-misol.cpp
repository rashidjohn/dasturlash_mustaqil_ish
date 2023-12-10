#include <iostream>
using namespace std;
int main() {
    int D, M;
    cout << "Oyni kiriting: "; cin >> M;
    cout << "Kunni kiriting: "; cin >> D;
    switch (M) {
    case 1:
        if (D==31) cout << "1-fevral" << endl;
        else cout << D+1 << "-yanvar" << endl; break;
    case 2:
        if (D==28) cout << "1-mart" << endl;
        else
            cout << D+1 << "-fevral" << endl;
        break;
    case 3:
        if (D==31)
            cout << "1-aprel" << endl;
        else
            cout << D+1 << "-mart" << endl;
        break;
    case 4:
        if (D==30)
            cout << "1-may" << endl;
        else
            cout << D+1 << "-aprel" << endl;
        break;
    case 5:
        if (D==31)
            cout << "1-iyun" << endl;
        else
            cout << D+1 << "-may" << endl;
        break;
    case 6:
        if (D==30)
            cout << "1-iyul" << endl;
        else
            cout << D+1 << "iyun" << endl;
        break;
    case 7:
        if (D==31)
            cout << "1-avgust" << endl;
        else
            cout << D+1 << "-iyul" << endl;
        break;
    case 8:
        if (D==31)
            cout << "1-sentyabr" << endl;
        else
            cout << D+1 << "-avgust" << endl;
    case 9:
        if (D==30)
            cout << "1-oktyabr" << endl;
        else
            cout << D+1 << "-sentyabr" << endl;
        break;
    case 10:
        if (D==31)
            cout << "1-noyabr" << endl;
        else
            cout << D+1 << "-oktyabr" << endl;
        break;
    case 11:
        if (D==30)
            cout << "1-dekabr" << endl;
        else
            cout << D+1 << "-noyabr" << endl;
        break;
    default:
        if (D==31)
            cout << "1-yanvar" << endl;
        else
            cout << D+1 << "-dekabr" << endl;
        break;
    }
}
