#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ofstream f;
    f.open("file.txt");
    f<<"Hello world";
    f.close();
}
