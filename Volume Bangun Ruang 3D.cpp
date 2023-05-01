#include <iostream>
#include <cmath>

using namespace std;

const float PI = 3.14;

float hitung_kubus(float sisi) {
    return pow(sisi, 3);
}

float hitung_balok(float panjang, float lebar, float tinggi) {
    return panjang * lebar * tinggi;
}

float hitung_tabung(float jari_jari, float tinggi) {
    return PI * pow(jari_jari, 2) * tinggi;
}

float hitung_bola(float jari_jari) {
    return (4 * PI * pow(jari_jari, 3)) / 3;
}

int main() {
    float sisi, panjang, lebar, tinggi, jari_jari;

    cout << "Masukkan sisi kubus: ";
    cin >> sisi;
    cout << "Volume kubus adalah: " << hitung_kubus(sisi) << endl;

    cout << "Masukkan panjang balok: ";
    cin >> panjang;
    cout << "Masukkan lebar balok: ";
    cin >> lebar;
    cout << "Masukkan tinggi balok: ";
    cin >> tinggi;
    cout << "Volume balok adalah: " << hitung_balok(panjang, lebar, tinggi) << endl;

    cout << "Masukkan jari-jari tabung: ";
    cin >> jari_jari;
    cout << "Masukkan tinggi tabung: ";
    cin >> tinggi;
    cout << "Volume tabung adalah: " << hitung_tabung(jari_jari, tinggi) << endl;

    cout << "Masukkan jari-jari bola: ";
    cin >> jari_jari;
    cout << "Volume bola adalah: " << hitung_bola(jari_jari) << endl;

    return 0;
}

