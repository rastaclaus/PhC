#include <iostream>
#include "struct25.h"

using namespace std;

int main() {
  struct25 s;
  s.init(10);
  s.initList(100);
  s.printList();
}

