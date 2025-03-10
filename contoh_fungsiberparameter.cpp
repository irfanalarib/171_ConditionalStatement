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

double hitungLuas2(double a, double t){
    return 0.5 * a * t;
}
void procedureOutput(){
    cout << "Luas Segitiga = " << hitungLuas() << endl;
}

void procedureOutput2(){
    cout << "Luas Segitiga = " << hitungLuas2(alas, tinggi) << endl;
}

int main(){
    procedurInput();
    procedureOutput();
    procedureOutput2();
}