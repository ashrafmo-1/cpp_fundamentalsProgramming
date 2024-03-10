#include <iostream>
using namespace std;

int main() {
  int KBytes;
  cout << "Enter the number of kilobytes: ";
  cin >> KBytes;
    int bytes = KBytes * 1024;
    int bits = bytes * 8;
    cout << "1. Kilobytes: " << KBytes << endl;
    cout << "2. Bytes: " << bytes << endl;
    cout << "3. Bits: " << bits << endl;
  return 0;
}