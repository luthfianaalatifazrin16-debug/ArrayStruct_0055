#include <iostream>
using namespace std;

struct DetailAlamat
{
    string desa;
    string kota;
};
struct orang
{
    string nama;
    DetailAlamat alamat;
    int umur;
};
int main()
{
    // deklarasi objek dari struct orang
    orang mhs;
    // isi objek
    cout << "Nama Mahasiswa:";
    cin >> mhs.nama;
    cout << "Alamat desa:";
    cin >> mhs.alamat.desa;
    cout << "Alamat Kota:";
    cin >> mhs.alamat.kota;
    cout << "Umur:";
    cin >> mhs.umur;
    cout << endl;
    //
    cout << "Nama : " << mhs.nama << endl;
    cout << "Desa : " << mhs.alamat.desa << endl;
    cout << "Kota : " << mhs.alamat.kota << endl;
    cout << "Umur : " << mhs.umur << endl;
}
