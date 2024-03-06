/*
  - Application To Create
  --- Create App Ask You To Type Number Of Kilobytes
  --- Write 3 Lines Contains
  ------ [1] The Number Of Kilobytes That User Input
  ------ [2] The Number Of Bytes
  ------ [3] The Number Of Bits
  Kilo Byte => 1024 Byte.
*/

#include <iostream>
using namespace std;

int main()
{

  int KBytes;
  cin >> KBytes;
  cout << KBytes;
  cout << KBytes * 1024;

  return 0;
}