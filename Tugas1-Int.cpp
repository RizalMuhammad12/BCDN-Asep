#include <iostream>
using namespace std;

int main(){
  int utang,bayar,sisa;

  utang=10000;

  cout << "Utang negara ada 10000, Mau bantu bayar berapa? = ";
  cin >> bayar;

  sisa= utang-bayar;

  cout << "Utang negara sisa " << sisa << " Terima kasih udah bantu. (potong dikit ah) ";

} // KALO BAYARNYA LEBIH DARI 10.000 GABISA (BELUM BELAJAR JIR)