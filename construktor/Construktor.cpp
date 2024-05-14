#include <iostream>
#include <string>
using namespace std;

class mahasiswa
{
public:
    int nim;
    string nama;

private:
    int Mahasiswa()
    {
        nim = 0;
        nama = "";
    };
    int Mahasiswa(int iNim)
    {
        nim = iNim;
    };
    int Mahasiswa(string iNama)
    {
        nama = iNama;
    };
    int Mahasiswa(int iNim, string iNama)
    {
        nim = iNim;
        nama = iNama;
    };
    void cetak() {
        cout << "NIM  = " << nim << endl;
        cout << "Nama = " << nama << endl;
        cout << endl;
    }
};