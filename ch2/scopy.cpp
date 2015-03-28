//C02:scopy.cpp
// Построчное копирование файла

#include <string>
#include <fstream>

using namespace std;

int main() {
  ifstream in("scopy.cpp"); // Открытие файла для чтения
  ofstream out("scopy2.cpp"); // Открытие файла для записи
  string s;
  while (getline(in, s)) // Символ новой строки при чтении теряется...
    out << s << endl; // ... поэтому его необходимо передать отдельно.
}///:~
