#include <iostream>
using namespace std;
int main(){
  int tinggi,nilai;
  string nama;

  cout << "Masukan Nama Anda : " << endl;
  cin >> nama;
  cout << "Masukan Tb anda : " << endl;
  cin >> tinggi;
  cout << "Masukan nilai : " << endl;
  cin >> nilai;
  
  // Syarat Lolos CPNS
  // 1. Nilai Harus lebih dari 200
  // 2. Tinggi harus 170

  if (tinggi > 165 && nilai > 200) 
  {cout << "Anda Memenuhi syarat CPNS";}

  else {cout << "Maaf anda NT";}

}
