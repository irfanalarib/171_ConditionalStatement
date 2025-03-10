#include <iostream>
using namespace std;

double luas,alas,tinggi;

void procedurInput(){
    cout << "Masukan Nilai alas : ";
    cin >> alas;

    cout << "Masukan Nilai tinggi : ";
    cin >> tinggi;
}

void procedurHitunLuas(){
 luas = 0.5 * alas * tinggi;
}

void procedureOutput(){
    cout << "Luas Segitiga = " << luas << endl;
}

int main(){
    procedurInput();
    procedurHitunLuas();
    procedureOutput();
}