#include <iostream>

using namespace std;

int a, b;
int y1[2][2], y2[2][2], h[2][2];

void penjumlahan(int y1[2][2], int y2[2][2])
{
    for (a = 0; a < 2; a++)
    {
        for (b = 0; b < 2; b++)
        {

            h[a][b] = y1[a][b] + y2[a][b];
            cout << h[a][b] << " ";
        }
        cout << endl;
    }
}
void pengurangan(int y1[2][2], int y2[2][2])
{
    for (a = 0; a < 2; a++)
    {
        for (b = 0; b < 2; b++)
        {
            h[a][b] = y1[a][b] - y2[a][b];
            cout << h[a][b] << " ";
        }
        cout << endl;
    }
}

void perkalianAntarMatriks(int y1[2][2], int y2[2][2])
{
    for (a = 0; a < 2; a++)
    {
        for (b = 0; b < 2; b++)
        {
            h[a][b] = 0;
            for (int c = 0; c < 2; c++)
            {
                h[a][b] += y1[a][c] * y2[c][b];
            }
            cout << h[a][b] << " ";
        }
        cout << endl;
    }
}

void perkalianSkalar(int y1[2][2], int y2[2][2])
{
    int d;
    int d1[2][2], d2[2][2];
    d = 2;
    for (a = 0; a < 2; a++)
    {
        for (b = 0; b < 2; b++)
        {
            d1[a][b] = y1[a][b] * d;
            d2[a][b] = y2[a][b] * d;

        }
    }
    cout << "Hasil perkalian skalar matriks 1" << endl;
    for (a = 0; a < 2; a++){
        for (b = 0; b < 2; b++)
        {
            cout << d1[a][b] << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "Hasil perkalian skalar matriks 2" << endl;
    for (a = 0; a < 2; a++){
        for (b = 0; b < 2; b++)
        {
            cout << d2[a][a] << " ";
        }
        cout << endl;
    }
    cout << endl;
}


int main()
{
    cout<< "--------------------Muhammad Afiq Nabiha Riandika-------------------------"<<endl;
     cout<< "-------------------------A11.2021.13350----------------------------------"<<endl;
      cout<< "---------------------KOMPUTER GRAFIK -4707- ----------------------------"<<endl;
       cout<< ""<<endl;
    cout << "Mengisi nilai dari matriks pertama " << endl;
    for (a = 0; a < 2; a++)
    {
        for (b = 0; b < 2; b++)
        {
            cout << "Masukkan nilai untuk matriks 1 baris [" << a + 1 << "] dan kolom [" << b + 1 << "]" << endl;
            cin >> y1[b][b];
        }
    }

    cout << "Mengisi nilai dari matriks kedua " << endl;
    for (a = 0; a < 2; a++)
    {
        for (b = 0; b < 2; b++)
        {
            cout << "Masukkan nilai untuk matriks 2 baris [" << a + 1 << "] dan kolom [" << b + 1 << "]" << endl;
            cin >> y2[a][b];
        }
    }
    cout << endl;

    cout << "Matriks 1 :" <<endl;
    for (a = 0; a < 2; a++)
    {
        for(b = 0; b < 2; b++)
        {
            cout << y1[a][b] << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Matriks 2 :" <<endl;
    for (a = 0; a < 2; a++)
    {
        for(b = 0; b < 2; b++)
        {
            cout << y2[a][b] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // Melakukan penjumlahan matriks
    cout << "Hasil penjumlahan matriks :" << endl;
    penjumlahan(y1, y2);
    cout << endl;

    cout <<"Hasil pengurangan matriks :" << endl;
    pengurangan(y1, y2);
    cout << endl;

    cout <<"Hasil perkalian antar matriks :" << endl;
    perkalianAntarMatriks(y1, y2);
    cout << endl;

    cout <<"Hasil perkalian skalar matriks :" << endl;
    perkalianSkalar(y1, y2);
    cout << endl;

    return 0;
}
