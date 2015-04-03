#include <iostream>
#include <fstream>
#include <string>
#include "Stack.h"
#include "CppLib.h"
#include "../../../require.h"

using namespace std;

int main() {
  ifstream in("../makefile");
  assure(in, "../makefile");
  string l;
  while (getline(in, l)){
    cout << l << endl;
  }
}
