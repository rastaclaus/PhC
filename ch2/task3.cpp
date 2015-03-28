//:C02:task3.cpp
// Подсчет количества слов в файле

#include <string>
#include <iostream>
#include <fstream>

using namespace std;

int main() {
  ifstream in("task3.cpp");
  string word;
  int words_count = 0;
  while (in >> word)
    ++words_count;
  cout << words_count << " words in file" << endl;
}///:~
