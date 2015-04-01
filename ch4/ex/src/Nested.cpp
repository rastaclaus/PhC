#include <iostream>
#include "Nested.h"
using namespace std;

void External::Nested::initialize() {
  d1=0;
  d2=0;
}

void External::initialize(const string& is) {
  name = is;
  data.initialize();
}

void External::print() {
  cout << "External {\n\tNested {\n\t\td1 = " << data.d1
    << "\n\t\td2 = " << data.d2 << endl << "\t}\n\tname = "
    <<  name << "\n}\n";
}
