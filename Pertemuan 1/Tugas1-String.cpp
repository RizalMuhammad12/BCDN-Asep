#include <iostream>
using namespace std;
int main(){

  string pertanyaan;
  cout << "Mau ngoding gk hari ini? (iya/malas) = ";
  cin >> pertanyaan;
  
  if (pertanyaan == "iya")
  cout << "Buka VScode Sekarang, cevattt";

  else if (pertanyaan == "malas")
  cout << "nice, mending scroll fesnuk";

  else
  cout << " menyalahi aturan kamu ini "; 
  
}