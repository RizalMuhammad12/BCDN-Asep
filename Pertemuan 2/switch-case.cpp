#include <iostream>
using namespace std;

int main (){
  int tanya;

  cout << "Asep ganteng atau tidak? ( pilih 1 sampai 3) = ";
  cin >> tanya;

  switch (tanya) { // Harus int kayaknya
    case 1:
    cout << "Ganteng" << endl;
    break; // fungsi break agar pilihan lainnya tidak kegabung, mksudnya jika pilih 1 maka 1, pilih 2 maka 2
    case 2:
    cout << "ganteng banget" << endl;
    break;
    case 3:
    cout << "Buwangettt" << endl;
    break;
  }

}