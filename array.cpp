#include <iostream>
using namespace std;

int main()
{
    // deklaraasi array dengan inisialisasi
    int dataku[5] = {10, 20, 30, 40, 50};
    //
    int datamu[5];
    int x;
    //
    cout << " Data ke - 3 : " << dataku[2] << endl;

    //
    x = dataku[2] * 3;
    //
    dataku[2] = 600;
    cout << " Data ke - 3 yang baru : " << dataku[2] << endl;

    //
    cout << "Data Index ke - 0 : ";
    cin >> datamu[0];
    cout << "Data Index ke - 1 : ";
    cin >> datamu[1];
    cout << "Data Index ke - 2 : ";
    cin >> datamu[2];
    cout << "Data Index ke - 3 : ";
    cin >> datamu[3];
    cout << "Data Index ke - 4 : ";
    cin >> datamu[4];

    //
    cout << "Data ke - 1 ; " << datamu[0] << endl;
    cout << "Data ke - 2 ; " << datamu[0] << endl;
    cout << "Data ke - 3 ; " << datamu[0] << endl;
    cout << "Data ke - 4 ; " << datamu[0] << endl;
    cout << "Data ke - 5 ; " << datamu[0] << endl;

    cout << endl;

    //
    for (int i = 0; i <= 4; i++)
    {
        cout << "Data Index ke - " << i << " :";
        cin >> datamu[i];
    }

    cout << endl;

    //
 for (int i = 0; i <= 4; i++)
    {
        cout << "Data ke - " << i + 1 << " : " << datamu[i] << endl;
    }
}
   
