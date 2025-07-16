#include <iostream>
using namespace std;
int main () {

  int angka1, angka2, hasilT, hasilX;
  string tanya;

  cout << "Masukan angka pertama = ";
  cin >> angka1;
  cout << "Masukan angka kedua = ";
  cin >> angka2;
  cout << "Mau di apain angkanya? (Kali atau Tambah) = ";
  cin >> tanya;

  hasilT=angka1+angka2;
  hasilX=angka1*angka2;

  if (tanya == "Kali" || tanya == "kali")
    {cout << "Hasil Penjumlahannya adalah = " << hasilX;}

  else if (tanya== "Tambah" || tanya == "tambah")
  { cout << "Hasil Perkaliannya adalah = " << hasilT;}

  else
    cout << "Bikin sendiri aja dah, disuruh milih aja susah";

}