#include <iostream>
using namespace std;

double luas,alas,tinggi;

void procedurInput(){
    cout << "Masukan Nilai alas : ";
    cin >> alas;

    cout << "Masukan Nilai tinggi : ";
    cin >> tinggi;
}

double hitungLuas2(double a, double t){
    return 0.5 * a * t;
}

string ukuranSegitiga(double l){
 //jika luas > 60 
 if(l > 60){
    return "Besar";
 }
 else{
    return "Kecil";
 }
}

void procedureOutput2(){
    cout << "Luas Segitiga = " << ukuranSegitiga(hitungLuas2(alas, tinggi)) << endl;
}

int main(){
    procedurInput();
    procedureOutput2();
}