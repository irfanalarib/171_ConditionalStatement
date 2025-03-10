#include <iostream>
using namespace std;

double luas,alas,tinggi;

void procedurInput(){
    cout << "Masukan Nilai alas : ";
    cin >> alas;

    cout << "Masukan Nilai tinggi : ";
    cin >> tinggi;
}

double hitungLuas(){
    return 0.5 * alas * tinggi;
}
void procedureOutput(){
    cout << "Luas Segitiga = " << hitungLuas() << endl;
}

int main(){
    procedurInput();
    procedureOutput();
}