// :co2:stream2.cpp
// Дополнительные возможности потоков

#include <iostream>
using namespace std;

int main() {
  // Определение формата при помощи манипуляторов:
  cout << "a number in decimal: "
    << dec << 15 << endl;

  cout << "a number in octal: "
    << oct << 15 << endl;

  cout << "a number in hex: "
    << hex << 15 << endl;

  cout << "a floating-point number: "
    << 3.1459 << endl;

  cout << "non-printing char *escape: "
    << char(27) << endl;
} //:~

