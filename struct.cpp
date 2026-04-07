#include <iostream>
using namespace std;

struct orang
{
    string nama;
    string alamat;
    int umur;
};

int main()
{
    //
    orang mhs;
    //
    cout << "Nama Mahasiswa:";
    cin >> mhs.nama;
    cout << "Alamat Asal:";
    cin >> mhs.nama;
    cout << "Umur:";
    cin >> mhs.nama;
    cout << endl;
    //
    cout << "Nama ; " << mhs.nama << endl;
    cout << "Alamat ; " << mhs.nama << endl;
    cout << "Umur ; " << mhs.nama << endl;
}
