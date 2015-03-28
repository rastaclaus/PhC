//:CO2:fillstring.cpp
// Чтение всего файла в отдельную строку
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

int main() {
  ifstream in("fillstring.cpp");
  string s, line;
  while(getline(in, line))
    s+=line + "\n";
  cout << s;

}///:~
