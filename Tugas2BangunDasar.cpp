#include<iostream>
using namespace std;
int main () {
    int s, p, l, t, a, b, d1, d2, r;
    double L, phi=3.14;

    cout << "PERSEGI" << endl;
    cout << "Sisi (s)= ";
    cin >> s;
    L = s * s;
    cout << "Luas (L) persegi = " << L << endl;
    //
    cout << "PERSEGI PANJANG" << endl;
    cout << "Panjang = ";
    cin >> p;
    cout << "Lebar = ";
    cin >> l;
    L = p * l;
    cout << "Luas (L) Persegi Panjang = " << L << endl;

    cout << "SEGITIGA" << endl;
    cout << "Alas = ";
    cin >> a;
    cout << "Tinggi = ";
    cin >> t;
    L = 0.5 * a * t;
    cout << "Luas (L) Segitiga = " << L << endl;

    cout << "TRAPESIUM" << endl;
    cout << "Atas = ";
    cin >> a;
    cout << "Bawah = ";
    cin >> b;
    cout << "Tinggi = ";
    cin >> t;
    L = 0.5 * (a + b) * t;
    cout << "Luas (L) Trapesium = " << L << endl;

    cout << "JAJAR GENJANG" << endl;
    cout << "Alas = ";
    cin >> a;
    cout << "Tinggi = ";
    cin >> t;
    L = a * t;
    cout << "Luas (L) Jajar Genjang = " << L << endl;

    cout << "BELAH KETUPAT" << endl;
    cout << "Diameter 1 = ";
    cin >> d1;
    cout << "Diameter 2 = ";
    cin >> d2;
    L = 0.5 * d1 *d2;
    cout << "Luas (L) Belah Ketupat = " << L << endl;

    cout << "LAYANG - LAYANG" << endl;
    cout << "Diameter 1 = ";
    cin >> d1;
    cout << "Diameter 2 = ";
    cin >> d2;
    L = 0.5 * d1 *d2;
    cout << "Luas (L) Layang - Layang = " << L << endl;

    cout << "LINGKARAN" << endl;
    cout << "Jari - jari = ";
    cin >> r;
    L = (double) phi * r * r;
    cout << "Luas (L) Lingkaran = " << L << endl;

    return 0;
}


