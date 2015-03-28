//:C03:prime.cpp
// поиск и вывод простых чисел от 1 до N
#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[]) {
  if (argc != 2) {
    cout << "as the argument must be a number..." << endl;
    return 1;
  }
  int limit = atoi(argv[1]);

  for (int i = 2; i < limit; ++i) {
    for (int j = i-1; j > 1; --j)
      if (i % j == 0)
        goto bottom;
    cout << i << endl;
    bottom:;
  }
}
