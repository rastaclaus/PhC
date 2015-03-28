//:C02:task6.cpp
// Копирование всего содержимого файла в вектор строк, 
// вывод вектора в обратном порядке


#include <string>
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main() {
  vector<string> v;
  ifstream in("task6.cpp");
  string line;
  string lines;
  while (getline(in, line))
    v.push_back(line);
  for (int i = 0; i < v.size(); ++i)
    lines += v[i] + "\n";
  cout << lines << endl;
}///:~
