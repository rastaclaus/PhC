//:C02:task5.cpp
// Копирование всего содержимого файла в вектор строк, 
// вывод вектора в обратном порядке


#include <string>
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main() {
  vector<string> v;
  ifstream in("task5.cpp");
  string line;
  while (getline(in, line))
    v.push_back(line);
  for (int i=v.size()-1; i >= 0; --i)
    cout << i << ": " << v[i] << endl;
}///:~
