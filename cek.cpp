#include <iostream>

using namespace std;

int main() {
  float angka;

  cout << "Masukkan angka: ";
  cin >> angka;

  if (angka > 0) {
    cout << "Anda memasukkan angka positif" << endl;
  } else if (angka < 0) {
    cout << "Anda memasukkan angka negatif" << endl;
  } else {
    cout << "Anda memasukkan angka 0" << endl;
  }

  return 0;
}
