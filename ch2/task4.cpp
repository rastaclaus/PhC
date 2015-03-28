//:C02:task4.cpp
// Подсчет количества вхождений искомого слова в файл

#include <string>
#include <iostream>
#include <fstream>

using namespace std;

int main() {
  ifstream in("task4.cpp");
  string word, req_word;
  cout << "Please, enter required word:\n";
  cin >> req_word;
  int words_count = 0;
  while (in >> word)
    if (word == req_word)
      ++words_count;
  cout << words_count << " matches found" << endl;
}///:~
