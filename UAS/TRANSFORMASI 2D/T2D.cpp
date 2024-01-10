#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

string pilih;
string pilih2;

void Translasi2D() {
    int x, y, t1, t2;

    cout << "Masukkan Titik Awal (x, y): ";
    cin >> x >> y;
    cout << "Masukkan Vektor Translasi (t1, t2): ";
    cin >> t1 >> t2;

    x = x + t1;
    y = y + t2;

    cout << "Hasil Translasi: " << x << "," << y << endl;
}

void Rotasi2D() {
    int x, y, angle;
    const double PI = 3.14159265359;

    cout << "Masukkan Koordinat Titik (x, y): ";
    cin >> x >> y;
    cout << "Masukkan Sudut Rotasi (derajat): ";
    cin >> angle;

    double radianAngle = angle * (PI / 180.0);

    int rotatedX = round(x * cos(radianAngle) - y * sin(radianAngle));
    int rotatedY = round(x * sin(radianAngle) + y * cos(radianAngle));
    cout << "Hasil Rotasi: " << rotatedX << "," << rotatedY << endl;
}

void Skala2D() {
    int x, y, scale_factor;

    cout << "Masukkan Koordinat Titik (x, y): ";
    cin >> x >> y;
    cout << "Masukkan Faktor Skala: ";
    cin >> scale_factor;

    int scaledX = round(x * scale_factor);
    int scaledY = round(y * scale_factor);

    cout << "Hasil Skala: " << scaledX << "," << scaledY << endl;
}


int main() {
    int choice;
    int choice2;

menu:
    cout << "====================================" << endl;
    cout << "TRANSFORMASI 2D" << endl;
    cout << "====================================" << endl;
    cout << "Pilih opsi: " << endl;
    cout << "1. Transformasi 2D" << endl;
    cout << " Input Pilihanmu = ";
    cin >> choice;

    switch (choice) {
    case 1:
    Transformasi2D:
        cout << "TRANSFORMASI 2D" << endl;
        cout << "Pilih opsi: " << endl;
        cout << "1.Translasi" << endl;
        cout << "2.Rotasi" << endl;
        cout << "3.Skala" << endl;
        cout << "Pilihanmu (1-3) = ";
        cin >> choice2;

        switch (choice2) {
        case 1:
            Translasi2D();
            goto milih;
            break;
        case 2:
            Rotasi2D();
            goto milih;
            break;
        case 3:
            Skala2D();
            goto milih;
            break;
        default:
            cout << "Opsi tidak valid.\n";
            break;
        }

    milih:
        cout << "pilih lagi y/n = ";
        cin >> pilih2;
        if (pilih2 == "y") {
            goto Transformasi2D;
        } else {
            goto menu;
        }
    }
}



