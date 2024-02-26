

#include <iostream>

using namespace std;
int main()
{//begin
    //numeric nPanjang, nLebar, nLuas
    // display "masukan panjang"
    // accept nPanjang
    // display "masukan Lebar"
    // accept nLebar
    // compute nLuas = nPanjang*nLebar
    // display "Luasnya adalah = " +nLuas
   

    int nPanjang, nLebar, nLuas;
    cout << "Masukan Panjang = ";
    cin >> nPanjang;
    cout << "Masukan Lebar = ";
    cin >> nLebar;
    nLuas = nPanjang * nLebar;
    cout << "luasnya adalah = " << nLuas << endl;
    
}

