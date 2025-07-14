#include <iostream>
using namespace std;

int main (){
  int angka = 10;
  
  cout << "Masukan Angka = ";
  cin >> angka;
  
if (angka > 12) // Jika angka lebih dari 12
    cout << "Yang anda masukan lebih dari 10";
  
else cout << "Yang anda masukan kurang dari 10"; // Sebaliknya jika tidak 12

}
// Jika perintah hanya satu boleh kurung saja, Jika lebih dari 1 wajib IF else di bungkus kurung kurawal
// BISA DIGUNAKAN PERINTAH LAIN SEPERTI
// > = LEBIH DARI
// < = KURANG DARI
// == = SAMA DENGAN 
// >= lEBIH DARI ATAU SAMA (JADI ADA 2 KONDISI)
// != = SALAH ATAU SAMA